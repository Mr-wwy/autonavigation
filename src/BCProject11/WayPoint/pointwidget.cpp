#include "pointwidget.h"
#include "ui_pointwidget.h"

QStandardItemModel *tablemodel_load;//加载表格模型类
QStandardItemModel *tablemodel_look;//查看表格模型类

QString fileName;//文件名
int filerow=0;  //行数

PointWidget::PointWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/image/way.png"));
    this->showMaximized();

    initData();
    initwidget();

    loadfile=new loadfilethread(this);
    savefile=new savethread(this);

    progressDialog=new QProgressDialog(this);
    //progressDialog->setWindowModality(Qt::WindowModal);      //设置模态时，会阻塞线程加载导致程序崩溃
    progressDialog->setMaximumWidth(500);
    progressDialog->setAutoClose(true);
    progressDialog->close();

    myprogressbar=new MyProgressbar();
    myprogressbar->close();

    //使用qRegisterMetaType注册信号传递类型
    qRegisterMetaType<autonavigation::VehicleStatus::ConstPtr>("autonavigation::VehicleStatus::ConstPtr");
    qRegisterMetaType<QList<QStandardItem*>>("QList<QStandardItem*>");

    connect(tabwidget,SIGNAL(currentChanged(int)),this,SLOT(tablechange_slot(int)));
    connect(this,SIGNAL(tablechange_signal(int)),emulationfile,SLOT(settable_slot(int)));

    connect(loadfile,SIGNAL(loadfile_start(int,int)),this,SLOT(loadfile_startslot(int,int)));
    connect(loadfile,SIGNAL(loadfile_runing(int,QList<QStandardItem*>)),this,SLOT(loadfile_runingslot(int,QList<QStandardItem*>)));
    connect(loadfile,SIGNAL(loadfile_stop()),this,SLOT(loadfile_stopslot()));

    connect(savefile,SIGNAL(savefile_start(int,int)),this,SLOT(savefile_startslot(int,int)));
    connect(savefile,SIGNAL(savefile_runing(int)),this,SLOT(savefile_runingslot(int)));
    connect(savefile,SIGNAL(savefile_stop()),this,SLOT(savefile_stopslot()));
}

PointWidget::~PointWidget()
{
    delete ui;
}

//初始化界面
void PointWidget::initwidget()
{
    tabwidget=new QTabWidget(this);
    emulationfile=new emulation(this);

    widgetBegin=new widgetbegin(this);
    widgetBegin->close();

    Hlayout=new QHBoxLayout();
    Hlayout2=new QHBoxLayout();
    Glayout=new QVBoxLayout();


    QVBoxLayout *vLayouttemptab1 = new QVBoxLayout();
    QWidget *widtemptab1=new QWidget();

    tableview_load=new QTableView(widtemptab1);
    vLayouttemptab1->addWidget(tableview_load);
    widtemptab1->setLayout(vLayouttemptab1);
    tabwidget->addTab(widtemptab1,tr("表格"));
    tabwidget->addTab(emulationfile,tr("路线仿真"));

    QStringList headerlabels;
    headerlabels<<tr("ID")<<tr("Gps毫秒")<<tr("间距")<<tr("经度")<<tr("维度")<<tr("高斯X")<<tr("高斯Y")<<tr("期望速度")<<tr("点类型");
    tablemodel_load=new QStandardItemModel(0,9,this);
    tablemodel_load->setHorizontalHeaderLabels(headerlabels);

    tableview_load->setModel(tablemodel_load);

    tableview_load->horizontalHeader()->setSectionResizeMode(8,QHeaderView::Stretch);
    tableview_load->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableview_load->horizontalHeader()->setStyleSheet("QHeaderView::section{background:skyblue;}");
    tableview_load->setAlternatingRowColors(true);


    BeginGrabButt=new QPushButton(this);
    BeginGrabButt->setText(tr("开始记录"));
    BeginGrabButt->setMaximumWidth(250);
    connect(BeginGrabButt,SIGNAL(clicked(bool)),this,SLOT(BeginGrabButt_clicked()));
    Glayout->addWidget(BeginGrabButt);

    ExportFileButt=new QPushButton(this);
    ExportFileButt->setText(tr("打开数据文件"));
    ExportFileButt->setMaximumWidth(250);
    connect(ExportFileButt,SIGNAL(clicked(bool)),this,SLOT(ExportFileButt_clicked()));
    Glayout->addWidget(ExportFileButt);

    SendFileButt=new QPushButton(this);
    SendFileButt->setText(tr("FTP"));
    SendFileButt->setMaximumWidth(250);
    connect(SendFileButt,SIGNAL(clicked(bool)),this,SLOT(SendFileButt_clicked()));
    Glayout->addWidget(SendFileButt);

 //   EmulationButt=new QPushButton(this);
 //   EmulationButt->setText("Emulation");
//    EmulationButt->setStyleSheet("background-color: rgb(211, 215, 207)");
//    connect(EmulationButt,SIGNAL(clicked(bool)),this,SLOT(EmulationButt_clicked()));
//    Hlayout2->addWidget(EmulationButt);
//    TableButt=new QPushButton(this);
//    TableButt->setText("Table");
//    TableButt->setStyleSheet("background-color: rgb(237, 212, 0)");
//    connect(TableButt,SIGNAL(clicked(bool)),this,SLOT(TableButt_clicked()));
//    Hlayout2->addWidget(TableButt);
//    Glayout->addLayout(Hlayout2);

    frame=new QFrame(this);
    frame->setMaximumWidth(250);
    frame->setFrameStyle(QFrame::Box|QFrame::Sunken);
    Glayout->addWidget(frame);

    QVBoxLayout* FrameGlayout=new QVBoxLayout(frame);
    QHBoxLayout *Hlayout3=new QHBoxLayout();
    QHBoxLayout *Hlayout4=new QHBoxLayout();
    QHBoxLayout *Hlayout5=new QHBoxLayout();

//    QLabel *lab1=new QLabel(frame);
//    lab1->setText("         Edit way points");
//    FrameGlayout->addWidget(lab1);

//    QLabel *lab2=new QLabel(frame);
//    lab2->setText("     Set change speed");
//    FrameGlayout->addWidget(lab2);

    QLabel *lab3=new QLabel(frame);
    lab3->setText(tr("选择需要设置的数据行号:"));
    FrameGlayout->addWidget(lab3);

    spinBoxRow_start=new QSpinBox(frame);
    Hlayout3->addWidget(spinBoxRow_start);

    spinBoxRow_end=new QSpinBox(frame);
    Hlayout3->addWidget(spinBoxRow_end);
    FrameGlayout->addLayout(Hlayout3);

    QLabel *lab4=new QLabel(frame);
    lab4->setText(tr("修改速度最小值和最大值:"));
    FrameGlayout->addWidget(lab4);

    spinBoxSpeed_min=new QSpinBox(frame);
    spinBoxSpeed_min->setRange(0,200);
    Hlayout4->addWidget(spinBoxSpeed_min);

    spinBoxSpeed_max=new QSpinBox(frame);
    spinBoxSpeed_max->setRange(0,200);
    Hlayout4->addWidget(spinBoxSpeed_max);

    FrameGlayout->addLayout(Hlayout4);

    OkButt=new QPushButton(this);
    OkButt->setText(tr("修改速度"));
    connect(OkButt,SIGNAL(clicked(bool)),this,SLOT(OkButt_clicked()));
    FrameGlayout->addWidget(OkButt);

    QLabel *lab5=new QLabel(frame);
    lab5->setText(tr("设置点类型:"));
    FrameGlayout->addWidget(lab5);

    comboxPointType=new QComboBox(frame);
    comboxPointType->addItem(tr("无:0"));
    comboxPointType->addItem(tr("起始点:1"));
    comboxPointType->addItem(tr("加速点:2"));
    comboxPointType->addItem(tr("匀速点:3"));
    comboxPointType->addItem(tr("减速点:4"));
    comboxPointType->addItem(tr("终点:5"));
    Hlayout5->addWidget(comboxPointType);
    FrameGlayout->addLayout(Hlayout5);

    OkButt2=new QPushButton(this);
    OkButt2->setText(tr("修改点类型"));
    connect(OkButt2,SIGNAL(clicked(bool)),this,SLOT(OkButt2_clicked()));
    FrameGlayout->addWidget(OkButt2);

    frame->setLayout(FrameGlayout);

    SaveFileButt=new QPushButton(this);
    SaveFileButt->setText(tr("保存至文件"));
    connect(SaveFileButt,SIGNAL(clicked(bool)),this,SLOT(SaveFileButt_clicked()));
    Glayout->addWidget(SaveFileButt);


    tableview_look=new QTableView(this);
    QStringList headerlabels2;
    headerlabels2<<tr("ID")<<tr("高斯X")<<tr("高斯Y");
    tablemodel_look=new QStandardItemModel(0,3,this);
    tablemodel_look->setHorizontalHeaderLabels(headerlabels2);
    tableview_look->setModel(tablemodel_look);
    tableview_look->setMaximumWidth(250);
    tableview_look->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableview_look->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    Glayout->addWidget(tableview_look);

    Hlayout->addLayout(Glayout);
    Hlayout->addWidget(tabwidget);

    setLayout(Hlayout);
    setWidgetEnable(false);

}

//数据初始化
void PointWidget::initData()
{
    SigBeginButt=0;
    hasFTP=false;
}

//初始化是否禁用控件
void PointWidget::setWidgetEnable(bool _enable)
{
    spinBoxRow_start->setEnabled(_enable);
    spinBoxRow_end->setEnabled(_enable);
    spinBoxSpeed_min->setEnabled(_enable);
    spinBoxSpeed_max->setEnabled(_enable);
    comboxPointType->setEnabled(_enable);

    OkButt->setEnabled(_enable);
    OkButt2->setEnabled(_enable);
}

//确认是否退出
void PointWidget::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::information(this,tr("退出程序"),QString(tr("确认退出程序")),
                                QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        event->accept(); // 接受退出信号，程序退出
    }
    else
    {
        event->ignore(); // 忽略退出信号，程序继续进行
    }
}

//记录数据点
void PointWidget::BeginGrabButt_clicked()
{
    if(!SigBeginButt)
    {
        fileName=QFileDialog::getSaveFileName(0,tr("新建文件"),tr("name"),"txt(*.txt)");
        if(fileName.length())
        {
            if(fileName.length()>=200)
            {
                QMessageBox::critical(this,"错误","文件名太长！",QMessageBox::YesAll);
            }
            else
            {
                FILE *fp;
                if(QFileInfo(fileName).suffix().isEmpty())
                {
                    fileName.append(".txt");
                }
                QByteArray StrToCharTemp = fileName.toLatin1();
                char *tempchar=StrToCharTemp.data();

                fp=fopen(tempchar,"w+");
                fclose(fp);

                widgetBegin->initData();
                tabwidget->close();
                Hlayout->addWidget(widgetBegin);
                widgetBegin->setFixedSize(1100,770);
                widgetBegin->show();
                SigBeginButt=1;
            }
        }
    }
}


int PointWidget::is_datafile()
{
    return 1;
}

//加载文件数据
void PointWidget::ExportFileButt_clicked()
{
    if(widgetBegin->m_sensorDataThread.isRunning())
    {
        QMessageBox::critical(this,"错误","正在记录数据点，不能打开文件！",QMessageBox::YesAll);
    }
    else
    {
        SigBeginButt=0;
        fileName="";
        fileName=QFileDialog::getOpenFileName(this,tr("打开文件"),"","txt(*.txt)");

        if(fileName.length())
        {
            if(is_datafile())
            {
                widgetBegin->close();
                tabwidget->show();

                loadfile->start();
            }
        }
        else
        {
            return;
        }
    }
}


//发送文件到自主车
void PointWidget::SendFileButt_clicked()
{
    //system("/home/base/ros_autonavigation_ws/src/autonavigation/src/WayPoint2/sendfile.sh");

    if(hasFTP)
    {
        if(ftpwidget->isMinimized())
        {
            ftpwidget->setWindowFlags(Qt::Window);
            ftpwidget->showFullScreen();
        }

        ftpwidget->raise();
    }
    else
    {
        ftpwidget=new FTPWidget;
        connect(ftpwidget,SIGNAL(destroyed(QObject*)),this,SLOT(fptWidget_destoryed(QObject*)));
        ftpwidget->show();
        ftpwidget->move(geometry().x()+(width()-ftpwidget->width())/2,
                        geometry().y()+(height()-ftpwidget->height())/2);
        hasFTP=true;
    }

}

void PointWidget::fptWidget_destoryed(QObject*)
{
    hasFTP=false;
}


//修改速度最大最小值
void PointWidget::OkButt_clicked()
{
   int spin1=spinBoxRow_start->value();
   int spin2=spinBoxRow_end->value();
   int spin3=spinBoxSpeed_min->value();
   int spin4=spinBoxSpeed_max->value();
   bool ok;
   int dec;
   if(spin2<spin1)
   {
       QMessageBox::warning(this,tr("Warning!"),tr("行号输入错误:起始行号大于终止行号"));
       return;
   }
   if((spin2>filerow)||(spin1>filerow))
   {
       QMessageBox::warning(this,tr("Warning!"),tr("行号输入错误:输入行号大于表格实际行号"));
       return;
   }
   if(spin3>spin4)
   {
       QMessageBox::warning(this,tr("Warning!"),tr("速度输入错误:最小速度大于最大速度"));
       return;
   }

   if(filerow>0)
   {
       for(int i=spin1-1;i<=spin2;i++)
       {
           dec=tablemodel_load->item(i,7)->text().toInt(&ok,10);
           if(dec<spin3)
           {
                QString item8_str=QString("%1").arg(spin3);
                QStandardItem *item8=new QStandardItem(item8_str);
                tablemodel_load->setItem(i,7,item8);
           }
           if(dec>spin4)
           {
               QString item8_str=QString("%1").arg(spin4);
               QStandardItem *item8=new QStandardItem(item8_str);
               tablemodel_load->setItem(i,7,item8);
           }
       }
   }
}

//修改点类型
void PointWidget::OkButt2_clicked()
{
    int spin1=spinBoxRow_start->value();
    int spin2=spinBoxRow_end->value();
    int spin5=comboxPointType->currentIndex();

    if(spin2<spin1)
    {
        QMessageBox::warning(this,tr("Warning!"),tr("行号输入错误:起始行号大于终止行号"));
        return;
    }
    if((spin2>filerow)||(spin1>filerow))
    {
        QMessageBox::warning(this,tr("Warning!"),tr("行号输入错误:输入行号大于表格实际行号"));
        return;
    }

    if(filerow>0)
    {
        for(int i=spin1-1;i<=spin2;i++)
        {
            QString item8_str=QString("%1").arg(spin5);
            QStandardItem *item8=new QStandardItem(item8_str);
            tablemodel_load->setItem(i,8,item8);
        }
    }
}

//保存至文件
void PointWidget::SaveFileButt_clicked()
{
    if(filerow>0)
    {
        if(widgetBegin->m_sensorDataThread.isRunning())
        {
            QMessageBox::critical(this,"错误","正在记录数据点，不能打开文件！",QMessageBox::YesAll);
        }
        else
        {
            fileName=QFileDialog::getSaveFileName(this,tr("保存文件"),"dataName","txt(*.txt)");
            if(fileName.length())
            {
                if(fileName.length()>=200)
                {
                    QMessageBox::critical(this,"错误","文件名太长！",QMessageBox::YesAll);
                }
                else
                {
                    savefile->start();
                }
            }
        }
    }

}

void PointWidget::tablechange_slot(int index)
{
    emit tablechange_signal(index);
}

void PointWidget::loadfile_startslot(int file_row, int file_size)
{
    tablemodel_load->removeRows(0,tablemodel_load->rowCount());

    myprogressbar->setValue(0);
    myprogressbar->setWindowTitle("Load");
    myprogressbar->setLabelText(fileName);
    myprogressbar->show();
    myprogressbar->move(geometry().x()+(width()-myprogressbar->width())/2,
                        geometry().y()+(height()-myprogressbar->height())/2);

}

void PointWidget::loadfile_runingslot(int currentrow, QList<QStandardItem *> list_item)
{
    tablemodel_load->appendRow(list_item);
    myprogressbar->setValue(100*currentrow/filerow);
}

void PointWidget::loadfile_stopslot()
{
    myprogressbar->close();
    //qDebug()<<"filerow:"<<filerow;
    if(filerow>0)
    {
        setWidgetEnable(true);
        spinBoxRow_start->setRange(1,filerow);
        spinBoxRow_end->setRange(1,filerow);
    }

}

void PointWidget::savefile_startslot(int file_row, int file_size)
{
    myprogressbar->setValue(0);
    myprogressbar->setWindowTitle("保存");
    myprogressbar->setLabelText(fileName);
    myprogressbar->show();
    myprogressbar->move(geometry().x()+(width()-myprogressbar->width())/2,
                        geometry().y()+(height()-myprogressbar->height())/2);
}

void PointWidget::savefile_runingslot(int currentrow)
{
    myprogressbar->setValue(100*currentrow/filerow);
}

void PointWidget::savefile_stopslot()
{
    myprogressbar->close();
}













