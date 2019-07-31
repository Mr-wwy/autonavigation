#include "map_localization.h"
#include "ui_map_localization.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QTime>

#include "globaldata.h"
#include "mapview.h"
#include "localitem.h"
#include "selfpositem.h"
#include "dangeritem.h"


Map_Localization::Map_Localization(QWidget *parent,QString filename) :
    QWidget(parent),
    ui(new Ui::Map_Localization)
{
    ui->setupUi(this);

    //初始化参数值
    m_localline.clear();
    //m_self.clear();
    m_selfpos=QPointF(0.0,0.0);
    m_azimuth=0.0;
    x_min=0;
    x_max=0;
    y_min=0;
    y_max=0;
    havelocallineitem=false;
    haveselfpositem=false;
    is_first_read_data=true;
    is_loadmap_success=false;
    unique_key_id=0;


    //设置Scene
    m_scene=new QGraphicsScene(this);
    m_scene->setSceneRect(SCENE_LEFT,SCENE_TOP,SCENE_WIDTH,SCENE_HEIGHT);

//    //添加Pixmapitem
//    QGraphicsPixmapItem *pixitem=new QGraphicsPixmapItem(QPixmap("ditu.jpg"));
//    m_scene->addItem(pixitem);
//    pixitem->setPos(0,0);
//    pixitem->setOpacity(0.7);//between 0.0 (transparent) and 1.0 (opaque)

    //添加自定义View
    m_view=new MapView(this);
    m_view->setGeometry(0,0,width(),height());
    m_view->setScene(m_scene);
    connect(m_view,SIGNAL(mousedoubleclick_centeron()),this,SLOT(mousedoubleclick_centeronslot()));

    this->setContextMenuPolicy(Qt::CustomContextMenu);     //右键快捷菜单
    connect(this,SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(customContextMenuRequested_slot(QPoint)));

    //set Menu and Action
    m_menu=new QMenu(this);
    m_openaction=new QAction(tr("加载"),this);
    m_menu->addAction(m_openaction);
    connect(m_openaction,SIGNAL(triggered(bool)),this,SLOT(openaction_slot(bool)));


    //加载局部路线
    load_map(filename);
}

Map_Localization::~Map_Localization()
{
    delete ui;
}

void Map_Localization::paintEvent(QPaintEvent *event)
{
    m_view->setGeometry(0,0,width(),height());               //当map_localization进行setGeometry()时
}

/********************************加载局部路线***************************************/
void Map_Localization::load_map(QString filename)
{
    //初始化m_startpoint，并将它作为原点
    QPointF point_start(0,0);
    m_startpoint=point_start;

    if(read_localline(filename))
    {
        SCENE_LEFT=x_min-1000;
        SCENE_TOP=y_min-1000;
        SCENE_WIDTH=x_max-x_min+2000;
        SCENE_HEIGHT=y_max-y_min+2000;
        m_scene->setSceneRect(SCENE_LEFT,SCENE_TOP,SCENE_WIDTH,SCENE_HEIGHT);//根据加载的路线点范围重新设置场景的大小

        qreal scale;
        if(SCENE_WIDTH>SCENE_HEIGHT)
        {
            scale=(qreal)m_view->width()/(qreal)SCENE_WIDTH;
        }
        else
        {
             scale=(qreal)m_view->height()/(qreal)SCENE_HEIGHT;
        }
        m_view->setZoomRange(0.5*scale,1/scale);

        m_view->zoom(scale);//根据加载的路线点范围设置视图(m_view)的缩放比例

        add_localitem();

        //add_dangeritem();//添加危险区域

        is_loadmap_success=true;
    }
    else
    {
        is_loadmap_success=false;

    }
}

/********************************读取文件添加数据点***************************************/
bool Map_Localization::read_localline(QString filename)
{
    if(filename.isEmpty())
        return false;

    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        //QMessageBox::information(this,tr("Warning!"),tr("Failed to open file."));
        file.close();
        return false;
    }
    //清空之前加载的localline数据点
    m_localline.clear();

    //m_localline添加起始点 m_startpoint
    m_localline.append(m_startpoint);

    QTextStream in(&file);
    QString text;
    QVector<QPointF> local_point;//用来记录文档中的gauss数据点
    while (!in.atEnd())
    {
        text=in.readLine();//读取每一行

        /*
        QString str_x=text.section(" ",5,5,QString::SectionSkipEmpty);
        //这个函数把字符串看成是几块，这些块由sep分隔，start和end指定块号，end默认为-1，返回的是【start,end】内的块组成的字符串
        QString str_y=text.section(" ",6,6,QString::SectionSkipEmpty);
        */

        //string.split();//这个函数把所有由sep分隔的块装进一个QStringList中返回
        QStringList str_list= text.split(" ", QString::SkipEmptyParts);
        if(str_list.count()<6)
        {
            //qDebug()<<"file error!";
            return false;
        }

        //注意世界坐标系x轴水平向右为正，y轴向上为正
        //像素坐标系u轴水平向右为正，v轴向下为正
        qreal x=str_list.at(5).toLong();//gaussX
        qreal y=-str_list.at(6).toLong();//gaussY


        QPointF point(x,y);
        local_point.append(point);

    }
    file.close();

    QPointF local_point_first(local_point.at(0).x(),local_point.at(0).y());
    m_realstart=local_point_first;

    //m_self.append(m_startpoint);//添加自身坐标--起始
    m_selfpos=m_startpoint;

    //以m_startpoint原点作为参考点，添加路径数据点
    for(int i=1;i<local_point.count();i++)
    {
        qreal local_dx=local_point.at(i).x()-m_realstart.x();
        qreal local_dy=local_point.at(i).y()-m_realstart.y();

        qreal n_pointx=m_startpoint.x()+local_dx;
        qreal n_pointy=m_startpoint.y()+local_dy;

        if(i==1)
        {
            x_max=x_min=n_pointx;
            y_max=y_min=n_pointy;
        }
        else
        {
            if(n_pointx<x_min)
            {
                x_min=n_pointx;
            }
            else if(n_pointx>=x_max)
            {
                x_max=n_pointx;
            }

            if(n_pointy<y_min)
            {
                y_min=n_pointy;
            }
            else if(n_pointy>=y_max)
            {
                y_max=n_pointy;
            }
        }
        QPointF n_point(n_pointx,n_pointy);
        m_localline.append(n_point);
    }
    return true;
}

/********************************添加路径数据路线item***************************************/
void Map_Localization::add_localitem()
{
    if(!havelocallineitem)
    {
        /*
        m_scene->removeItem(m_locallineItem);
        delete m_locallineItem;//由于后面需要多次new(即分配新的内存)，故需释放之前指针所指内存，否则会造成内存不足，程序被杀死的情况
        m_locallineItem=NULL;
        */

        QColor color(Qt::black);
        m_locallineItem=new LocalLineItem(color,m_localline,m_realstart);
        m_locallineItem->setPos(m_startpoint);
        m_scene->addItem(m_locallineItem);

        havelocallineitem=true;
    }
    else
    {
        QColor color(Qt::black);
        m_locallineItem->repaint(color,m_localline,m_realstart);
    }

    m_scene->update();

}

/********************************添加当前位置item***************************************/
void Map_Localization::add_selfpositem()
{
    if(!haveselfpositem)
    {
        /*
        m_scene->removeItem(m_selfposItem);
        delete m_selfposItem;//由于后面需要多次new(即分配新的内存)，故需释放之前指针所指内存，否则会造成内存不足，程序被杀死的情况
        m_selfposItem=NULL;
        */

        QColor color(Qt::blue);
        m_selfposItem=new SelfPosItem(color,m_selfpos,m_realstart,m_azimuth/100);
        m_selfposItem->setPos(m_startpoint);
        m_scene->addItem(m_selfposItem);

        haveselfpositem=true;
    }
    else
    {
        QColor color(Qt::blue);
        m_selfposItem->repaint(color,m_selfpos,m_realstart,m_azimuth/100);
    }

    m_scene->update();

}

/********************************添加危险区域dangeritem***************************************/
void Map_Localization::add_dangeritem()
{

    m_dangerpoint=m_localline.last();
    m_radius=500.0;

    m_dangerItem=new DangerItem(QColor(255,20,20),m_dangerpoint,m_radius);
    m_dangerItem->setPos(m_startpoint);
    m_scene->addItem(m_dangerItem);

    m_scene->update();
}

/********************************获取当前高斯坐标并添加当前位置itme***************************************/
void Map_Localization::change_Map_Localization(qreal gaussX, qreal gaussY, float azimuth, int key_id)
{
    //注意世界坐标系x轴水平向右为正，y轴向上为正
    //像素坐标系u轴水平向右为正，v轴向下为正
    qreal x=gaussX;
    qreal y=-gaussY;
    m_azimuth=-azimuth;    //航向角，单位0.01度，向东为0，逆时针0～36000
    unique_key_id=key_id;

    if(is_first_read_data&&!is_loadmap_success)
    {
        QPointF point_first(x,y);
        m_realstart=point_first;
        is_first_read_data=false;
        return;
    }

    qreal dx=x-m_realstart.x();
    qreal dy=y-m_realstart.y();

    qreal new_x=m_startpoint.x()+dx;
    qreal new_y=m_startpoint.y()+dy;

     QPointF point(new_x,new_y);

     //m_self.append(point);
     m_selfpos=point;

     add_selfpositem();

     if(is_following)
     {     
//         m_view->centerOn(m_self.last());//跟踪当前位置
         m_view->centerOn(m_selfpos);//跟踪当前位置
     }
}

/********************************View响应鼠标双击***************************************/
void Map_Localization::mousedoubleclick_centeronslot()
{
    is_following=true;
    if((m_selfpos.x()!=0.0)&&(m_selfpos.y()!=0.0))
    {
        m_view->centerOn(m_selfpos);          //跟踪当前位置

    }
//    if(m_self.count()>0)
//    {
//        m_view->centerOn(m_self.last());   //跟踪当前位置
//    }

}

void Map_Localization::customContextMenuRequested_slot(QPoint p)
{
    //m_menu->exec(p);              //以窗口原点为基准点
    m_menu->exec(QCursor::pos());

}

void Map_Localization::openaction_slot(bool)
{
    QString fileName=QFileDialog::getOpenFileName(NULL,tr("Open file"),tr(""),tr("*.txt"));
    if(!fileName.isEmpty())
    {

        m_scene->clear();

        //初始化参数值
        m_localline.clear();
        //m_self.clear();
        m_selfpos=QPointF(0.0,0.0);

//        delete m_locallineItem;
//        m_locallineItem=NULL;

//        delete m_selfposItem;
//        m_selfposItem=NULL;

        m_azimuth=0.0;
        x_min=0;
        x_max=0;
        y_min=0;
        y_max=0;
        havelocallineitem=false;
        haveselfpositem=false;
        is_first_read_data=true;
        is_loadmap_success=false;
        unique_key_id=0;


        load_map(fileName);
        emit modifyfilename_signals(fileName);
        //qDebug()<<"load";
    }
    else
    {
        //qDebug()<<"return";
        return;
    }


}



































































