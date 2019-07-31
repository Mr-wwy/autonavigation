#include "widgetbegin.h"
#include "ui_widgetbegin.h"

extern QString fileName;

widgetbegin::widgetbegin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widgetbegin)
{
    ui->setupUi(this);
    initData();
    m_sensorDataThread.init();
    connect(&m_sensorDataThread,SIGNAL(globalpose_readed(const autonavigation::VehicleStatus::ConstPtr&)),this,SLOT(print_globalpose_data(const autonavigation::VehicleStatus::ConstPtr&)));
}

widgetbegin::~widgetbegin()
{
    delete ui;
}

//初始化数据
void widgetbegin::initData()
{
    gaussX=0;
    gaussY=0;

    m_gaussX=0;
    m_gaussY=0;
    m_temp_l=0;

    row=0;
    sigend=0;
    temp_line=0;
    PushButtonSign=0;
    memset(filename,0,sizeof(filename));
}

void widgetbegin::capture()
{
    if(!m_sensorDataThread.isRunning())
    {
      m_sensorDataThread.start();
    }
}


void widgetbegin::getfilename()
{
    QByteArray StrToCharTemp = fileName.toLatin1();
    char *tempchar=StrToCharTemp.data();
    strcpy(filename,tempchar);
}

void widgetbegin::on_pushButton_clicked()
{
    if(PushButtonSign==0)
    {
        if(sigend)
        {
            fileName=QFileDialog::getSaveFileName(this,tr("新建文件"),"dataName","txt(*.txt)");
            if(fileName.length())
            {
                if(fileName.length()>=200)
                {
                    int ret=QMessageBox::critical(this,"错误","文件名太长！",QMessageBox::YesAll);
                }
                else
                {
                    ui->pushButton->setText("暂停");
                    PushButtonSign=1;
                    getfilename();
                    m_sensorDataThread.stop_sig=true;
                    capture();
                }
            }
        }
        else
        {
            ui->pushButton->setText("暂停");
            PushButtonSign=1;
            getfilename();
            m_sensorDataThread.stop_sig=true;
            capture();
        }
    }
    else if(PushButtonSign==1)
    {
        ui->pushButton->setText("开始");
        PushButtonSign=0;
        sigend=0;
//        fp=fopen("tempnum.waypoint2-0.txt","w+");
//        fprintf(fp, "%d\n",row);
//        fclose(fp);
        m_sensorDataThread.stop_sig=false;
    }
}

void widgetbegin::print_globalpose_data(const autonavigation::VehicleStatus::ConstPtr &gp)
{
     //  memset(&temp_export,0,sizeof(struct File_Type));
        if(gaussX!=gp->gaussX&&gaussY!=gp->gaussY&&(temp_mini!=gp->gps_millisecond||row==0))
       {
           QString item2_str=QString("%1").arg(gp->gps_millisecond);
           ui->label_4->setText(item2_str);
           if(row==0)//the first point
           {
               temp_l=0;
               m_temp_l=0;
               m_gaussX=gp->gaussX;
               m_gaussY=gp->gaussY;
           }
           else
           {
               temp_l=sqrt(pow(gp->gaussX-gaussX,2)+pow(gp->gaussY-gaussY,2));
               m_temp_l=sqrt(pow(gp->gaussX-m_gaussX,2)+pow(gp->gaussY-m_gaussY,2));
           }

           QString item3_str=QString("%1").arg(temp_l);
           ui->label_5->setText(item3_str);

           QString item4_str=QString("%1").arg(gp->longitude);
           ui->label_7->setText(item4_str);

           QString item5_str=QString("%1").arg(gp->latitude);
           ui->label_9->setText(item5_str);

           QString item6_str=QString("%1").arg(gp->gaussX);
           ui->label_11->setText(item6_str);

           QString item7_str=QString("%1").arg(gp->gaussY);
           ui->label_13->setText(item7_str);

           QString item8_str=QString("%1").arg(gp->vehicle_speed);
           ui->label_15->setText(item8_str);

           QString item9_str=QString("%1").arg(temp_line);
           ui->label_17->setText(item9_str);

           if(row==0 || m_temp_l>=100)
           {
               //两点间距大于等于1m才记录保存数据路点
               fp=fopen(filename,"a+");
               fprintf(fp, "%d %ld %d %lf %lf %ld %ld %d %d\n",
                       row,
                       gp->gps_millisecond,
                       m_temp_l,
                       gp->longitude,
                       gp->latitude,
                       gp->gaussX,
                       gp->gaussY,
                       gp->vehicle_speed,
                       temp_line);
               fclose(fp);

               m_gaussX=gp->gaussX;
               m_gaussY=gp->gaussY;
               row++;
           }

       }

       gaussX=gp->gaussX;
       gaussY=gp->gaussY;
       temp_mini=gp->gps_millisecond;
}

void widgetbegin::on_pushButton_3_clicked()
{
    initData();
    sigend=1;
    if(m_sensorDataThread.isRunning())
    {
       m_sensorDataThread.stop();
    }
}
