#include "emulation.h"
#include "ui_emulation.h"
#include <QDebug>

extern QStandardItemModel *tablemodel_load;
extern int filerow;

extern Myitem *marker_start;
extern Myitem *marker_end;

extern int AA;
extern int BB;
extern int CC;

QLabel *label1;
QLabel *label3;
QLabel *label5;
QLabel *label7;
QLabel *label9;
QLabel *label11;
QLabel *label13;
QLabel *label15;
QLabel *label17;

emulation::emulation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::emulation)
{
    ui->setupUi(this);
    loaditemflag=0;

    x_min=0;
    x_max=0;
    y_min=0;
    y_max=0;

    graphicsView=new myview(this);
    scene = new myscene(this);

    int size = style()->pixelMetric(QStyle::PM_ToolBarIconSize);
    QSize iconSize(size, size);


    QToolButton *zoomInIcon = new QToolButton(this);
    zoomInIcon->setAutoRepeat(true);
    zoomInIcon->setAutoRepeatInterval(33);
    zoomInIcon->setAutoRepeatDelay(0);
    zoomInIcon->setIcon(QPixmap(":/image/zoomin.png"));
    zoomInIcon->setIconSize(iconSize);

    QToolButton *zoomOutIcon = new QToolButton(this);
    zoomOutIcon->setAutoRepeat(true);
    zoomOutIcon->setAutoRepeatInterval(33);
    zoomOutIcon->setAutoRepeatDelay(0);
    zoomOutIcon->setIcon(QPixmap(":/image/zoomout.png"));
    zoomOutIcon->setIconSize(iconSize);

    zoomSlider = new QSlider(this);
    zoomSlider->setMinimum(0);
    zoomSlider->setMaximum(500);
    zoomSlider->setValue(350);
    zoomSlider->setTickPosition(QSlider::TicksRight);

    QVBoxLayout *zoomSliderLayout = new QVBoxLayout();
    zoomSliderLayout->addWidget(zoomInIcon);
    zoomSliderLayout->addWidget(zoomSlider);
    zoomSliderLayout->addWidget(zoomOutIcon);

    QToolButton *rotateLeftIcon = new QToolButton(this);
    rotateLeftIcon->setIcon(QPixmap(":/image/rotateleft.png"));
    rotateLeftIcon->setIconSize(iconSize);

    QToolButton *rotateRightIcon = new QToolButton(this);
    rotateRightIcon->setIcon(QPixmap(":/image/rotateright.png"));
    rotateRightIcon->setIconSize(iconSize);

    rotateSlider = new QSlider();
    rotateSlider->setOrientation(Qt::Horizontal);
    rotateSlider->setMinimum(-360);
    rotateSlider->setMaximum(360);
    rotateSlider->setValue(0);
    rotateSlider->setTickPosition(QSlider::TicksBelow);

    QHBoxLayout *rotateSliderLayout = new QHBoxLayout();
    rotateSliderLayout->addWidget(rotateLeftIcon);
    rotateSliderLayout->addWidget(rotateSlider);
    rotateSliderLayout->addWidget(rotateRightIcon);

    resetButton = new QToolButton(this);
    resetButton->setText(tr("R"));
    resetButton->setEnabled(false);

    QHBoxLayout *labelLayout = new QHBoxLayout();

    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::blue);
    QFont ft;
    ft.setPointSize(7);

    label = new QLabel(tr("ID:"));
    label->setFont(ft);
    label1= new QLabel("0");
    label1->setFont(ft);
    label1->setPalette(pa);
    label1->setMidLineWidth(100);

    label2 = new QLabel(tr("Gps毫秒:"));
    label2->setFont(ft);
    label3= new QLabel("0");
    label3->setFont(ft);
    label3->setPalette(pa);
    label3->setMidLineWidth(100);

    label4 = new QLabel(tr("间距:"));
    label4->setFont(ft);
    label5= new QLabel("0");
    label5->setFont(ft);
    label5->setPalette(pa);
    label5->setMidLineWidth(100);

    label6 = new QLabel(tr("经度:"));
    label6->setFont(ft);
    label7= new QLabel("0");
    label7->setFont(ft);
    label7->setPalette(pa);
    label7->setMidLineWidth(100);

    label8 = new QLabel(tr("维度:"));
    label8->setFont(ft);
    label9= new QLabel("0");
    label9->setFont(ft);
    label9->setPalette(pa);
    label9->setMidLineWidth(100);

    label10 = new QLabel(tr("高斯X:"));
    label10->setFont(ft);
    label11= new QLabel("0");
    label11->setFont(ft);
    label11->setPalette(pa);
    label11->setMidLineWidth(100);

    label12 = new QLabel(tr("高斯Y:"));
    label12->setFont(ft);
    label13= new QLabel("0");
    label13->setFont(ft);
    label13->setPalette(pa);
    label13->setMidLineWidth(100);

    label14 = new QLabel(tr("期望速度:"));
    label14->setFont(ft);
    label15= new QLabel("0");
    label15->setFont(ft);
    label15->setPalette(pa);
    label15->setMidLineWidth(100);

    label16 = new QLabel(tr("点类型:"));
    label16->setFont(ft);
    label17= new QLabel("0");
    label17->setFont(ft);
    label17->setPalette(pa);
    label17->setMidLineWidth(100);

    selectModeButton = new QToolButton(this);
    selectModeButton->setText(tr("选择模式"));
    selectModeButton->setCheckable(true);

    dragModeButton = new QToolButton(this);
    dragModeButton->setText(tr("拖放模式"));
    dragModeButton->setCheckable(true);
    QButtonGroup *pointerModeGroup = new QButtonGroup(this);
    pointerModeGroup->setExclusive(true);
    pointerModeGroup->addButton(selectModeButton);
    pointerModeGroup->addButton(dragModeButton);

    labelLayout->addWidget(label);
    labelLayout->addWidget(label1);
    labelLayout->addWidget(label2);
    labelLayout->addWidget(label3);
    labelLayout->addWidget(label4);
    labelLayout->addWidget(label5);
    labelLayout->addWidget(label6);
    labelLayout->addWidget(label7);
    labelLayout->addWidget(label8);
    labelLayout->addWidget(label9);
    labelLayout->addWidget(label10);
    labelLayout->addWidget(label11);
    labelLayout->addWidget(label12);
    labelLayout->addWidget(label13);
    labelLayout->addWidget(label14);
    labelLayout->addWidget(label15);
    labelLayout->addWidget(label16);
    labelLayout->addWidget(label17);
    labelLayout->addStretch();

    Go=new QToolButton(this);
    Go->setText(tr("开始运动"));
    labelLayout->addWidget(Go);
    labelLayout->addStretch();

    Openmap=new QToolButton(this);
    Openmap->setText(tr("加载数据"));
    labelLayout->addWidget(Openmap);

    Closemap=new QToolButton(this);
    Closemap->setText(tr("关闭数据"));
    labelLayout->addWidget(Closemap);
    labelLayout->addStretch();

    labelLayout->addWidget(selectModeButton);
    labelLayout->addWidget(dragModeButton);
    labelLayout->addStretch();

    QGridLayout *topLayout = new QGridLayout(this);
    topLayout->addLayout(labelLayout, 0, 0);
    topLayout->addWidget(graphicsView, 1, 0);
    topLayout->addLayout(zoomSliderLayout, 1, 1);
    topLayout->addLayout(rotateSliderLayout, 2, 0);
    topLayout->addWidget(resetButton, 2, 1);
    this->setLayout(topLayout);

    connect(resetButton, SIGNAL(clicked()), this, SLOT(resetView()));
    connect(zoomSlider, SIGNAL(valueChanged(int)), this, SLOT(setupMatrix()));
    connect(rotateSlider, SIGNAL(valueChanged(int)), this, SLOT(setupMatrix()));
    connect(selectModeButton, SIGNAL(toggled(bool)), this, SLOT(togglePointerMode()));
    connect(dragModeButton, SIGNAL(toggled(bool)), this, SLOT(togglePointerMode()));

    connect(rotateLeftIcon, SIGNAL(clicked()), this, SLOT(rotateLeft()));
    connect(rotateRightIcon, SIGNAL(clicked()), this, SLOT(rotateRight()));
    connect(zoomInIcon, SIGNAL(clicked()), this, SLOT(zoomIn()));
    connect(zoomOutIcon, SIGNAL(clicked()), this, SLOT(zoomOut()));

    connect(graphicsView,SIGNAL(change1(int)),this,SLOT(zoomIn()));
    connect(graphicsView,SIGNAL(change2(int)),this,SLOT(zoomOut()));
    connect(this,SIGNAL(emitrotate(int,qreal)),graphicsView,SLOT(setrotate(int,qreal)));

    connect(Go, SIGNAL(clicked()), this, SLOT(go()));
    connect(Openmap, SIGNAL(clicked()), this, SLOT(openmap()));
    connect(Closemap, SIGNAL(clicked()), this, SLOT(closemap()));


    graphicsView->setScene(scene);
    graphicsView->setDragMode(graphicsView->ScrollHandDrag);
    graphicsView->setDragMode(graphicsView->RubberBandDrag);
    graphicsView->setOptimizationFlags(QGraphicsView::DontSavePainterState);
    //graphicsView->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    graphicsView->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    graphicsView->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);//若没有FullViewportUpdate,QGraphicsview平移与缩放后有的item显示不完整
    graphicsView->setRenderHint(QPainter::Antialiasing);

    setupMatrix();

    setWidgetEnable(false);
}

emulation::~emulation()
{
    scene->clear();
    delete ui;
}

void emulation::setWidgetEnable(bool _enable)
{
    Go->setEnabled(_enable);
    Closemap->setEnabled(_enable);

    selectModeButton->setEnabled(_enable);
    dragModeButton->setEnabled(_enable);

    Openmap->setEnabled(!_enable);

}

void emulation::settable_slot(int table_index)
{

}

void emulation::resetView()//重置操作
{
    zoomSlider->setValue(350);
    rotateSlider->setValue(0);
    setupMatrix();
    graphicsView->ensureVisible(QRectF(0, 0, 0, 0));
    resetButton->setEnabled(false);

}

//设置位置和显示区
void emulation::setupMatrix()
{
    qreal scale = qPow(qreal(2), (zoomSlider->value() - 400) /qreal(50));
    QMatrix matrix;
    matrix.scale(scale, scale);
    matrix.rotate(rotateSlider->value());
    emit emitrotate(rotateSlider->value(),scale);

    graphicsView->setMatrix(matrix);
    setResetButtonEnabled();
}

void emulation::setResetButtonEnabled()
{
    resetButton->setEnabled(true);
}

void emulation::togglePointerMode()
{
    graphicsView->setDragMode(selectModeButton->isChecked()
                              ? QGraphicsView::RubberBandDrag
                              : QGraphicsView::ScrollHandDrag);
    graphicsView->setInteractive(selectModeButton->isChecked());
}

void emulation::rotateLeft()
{
    rotateSlider->setValue(rotateSlider->value() - 10);
}

void emulation::rotateRight()
{
    rotateSlider->setValue(rotateSlider->value() + 10);
}

void emulation::zoomIn(int level)
{
    zoomSlider->setValue(zoomSlider->value() + level);
}

void emulation::zoomOut(int level)
{
    zoomSlider->setValue(zoomSlider->value() - level);
}

void emulation::go()//汽车仿真运动
{
    if(BB<0||CC<0)
    {
        QMessageBox::critical(this,tr("错误"),tr("仿真点起始点或结束点没有设置"),QMessageBox::Yes);
        return;
    }
    if(CC>=BB)
    {
        QPropertyAnimation *animation=new QPropertyAnimation(marker_start,"pos");
        double alltime=0.0;
        for(int i=BB+1;i<=CC;i++)
        {
            int delta=tablemodel_load->item(i,2)->text().toInt(&ok,10);
            int speed=tablemodel_load->item(i,7)->text().toInt(&ok,10);
            if(speed<=0) continue; //速度speed(除数)不能为零

            alltime+=0.01*delta/(1000.0*speed)*3600.0*1000.0;
        }
        qDebug()<<"alltime:"<<alltime;
        animation->setDuration(alltime);
        animation->setStartValue(marker_start->pos());

        double realtime=0.0;
        for(int i=BB+1;i<=CC;i++)
        {
            int delta=tablemodel_load->item(i,2)->text().toInt(&ok,10);
            int speed=tablemodel_load->item(i,7)->text().toInt(&ok,10);
            if(speed<=0) continue; //速度speed(除数)不能为零

            realtime+=0.01*delta/(1000.0*speed)*3600.0*1000.0;
            animation->setKeyValueAt(realtime/alltime,QPointF(tablemodel_load->item(i,5)->text().toLong(&ok,10),(-1)*tablemodel_load->item(i,6)->text().toLong(&ok,10)));
        }

//        qreal size=CC-BB;
//        animation->setDuration(100*size);
//
//        animation->setStartValue(marker_start->pos());
//        for(int i=BB+1;i<CC;i++)
//        {
//            animation->setKeyValueAt((i-BB+1)/size,QPointF(tablemodel_load->item(i,5)->text().toLong(&ok,10),(-1)*tablemodel_load->item(i,6)->text().toLong(&ok,10)));

//        }

        animation->setEndValue(marker_end->pos());

        connect(animation,SIGNAL(valueChanged(QVariant)),this,SLOT(animation_valuechanged(QVariant)));
        connect(animation,SIGNAL(finished()),this,SLOT(animation_finished()));
        animation->start(QAbstractAnimation::DeleteWhenStopped);

        Go->setEnabled(false);
    }
    else
    {
        QMessageBox::critical(this,tr("错误"),tr("仿真点设置有误"),QMessageBox::Yes);
    }
}

void emulation::animation_valuechanged(QVariant value)
{
    scene->update();
}

void emulation::animation_finished()
{
    scene->return2startpos();
    Go->setEnabled(true);
}

void emulation::openmap()//加载数据到仿真地图
{
    if(loaditemflag==0)
    {
        if(filerow>0)
        {
            for(int i=0;i<tablemodel_load->rowCount();i++)
            {
                Myitem *item = new Myitem();

                //注意世界坐标系x轴水平向右为正，y轴向上为正
                //像素坐标系u轴水平向右为正，v轴向下为正
                long gaussx=tablemodel_load->item(i,5)->text().toLong(&ok,10);
                long gaussy=(-1)*tablemodel_load->item(i,6)->text().toLong(&ok,10);//将表格纵坐标(即Gaussy)取相反数赋给scene纵坐标

                item->line_num=tablemodel_load->item(i,0)->text().toInt(&ok,10);
                item->millisecond=tablemodel_load->item(i,1)->text().toLong(&ok,10);
                item->delta_distance=tablemodel_load->item(i,2)->text().toInt(&ok,10);
                item->longitude=tablemodel_load->item(i,3)->text().toDouble(&ok);
                item->latitude=tablemodel_load->item(i,4)->text().toDouble(&ok);
                item->gaussX=gaussx;
                item->gaussY=(-1)*gaussy;    //使标签纵坐标(Gaussy)与表格纵坐标(Gaussy)显示一致
                item->expect_speed=tablemodel_load->item(i,7)->text().toInt(&ok,10);
                item->point_type=tablemodel_load->item(i,8)->text().toInt(&ok,10);
                item->setPos(QPointF(gaussx,gaussy));
                scene->addItem(item);
                
                if(i==0)
                {
                    x_max=x_min=gaussx;
                    y_max=y_min=gaussy;
                }
                else
                {
                    if(gaussx<x_min)
                    {
                        x_min=gaussx;
                    }
                    else if(gaussx>=x_max)
                    {
                        x_max=gaussx;
                    }

                    if(gaussy<y_min)
                    {
                        y_min=gaussy;
                    }
                    else if(gaussy>=y_max)
                    {
                        y_max=gaussy;
                    }
                }


            }
            qreal scene_width=x_max-x_min > 2000 ? x_max-x_min : 2000;
            qreal scene_height=y_max-y_min > 2000 ? y_max-y_min : 2000;
            scene->setSceneRect(x_min-scene_width*0.5,y_min-scene_height*0.5,scene_width*2,scene_height*2);
            loaditemflag=1;
            setWidgetEnable(true);
            selectModeButton->setChecked(true);
            dragModeButton->setChecked(false);
        }
        else
        {
            QMessageBox::critical(this,tr("数值错误"),tr("没有数据！"),QMessageBox::Yes);
        }
    }
}

void emulation::closemap()
{
    if(loaditemflag==1)
    {

        if(marker_start!=NULL)
        {
            //qDebug()<<"start";
            delete marker_start;
            marker_start=NULL;
        }
        if(marker_end!=NULL)
        {
            //qDebug()<<"end";
            delete marker_end;
            marker_end=NULL;
        }
        BB=-1;
        CC=-1;
        //必须先释放marker_start与marker_end然后在清除scene，否则会崩溃
        scene->clear();
        loaditemflag=0;
        setWidgetEnable(false);


    }
}

