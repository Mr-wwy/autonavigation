#include "mapview.h"

#include <QWheelEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QScrollBar>
#include <QDebug>
#include "math.h"
#include "globaldata.h"


MapView::MapView(QWidget *parent)
               :QGraphicsView(parent)
{
    //初始化值
    m_translateButton=Qt::LeftButton;
    m_scale=1.0;
    m_zoomDelta=0.1;
    m_translateSpeed=1.0;
    m_bMouseTranslate=false;
    m_isfirst_mousepress=true;
    current_horizontalvalue=0;
    current_verticalvalue=0;
    scale_min=0.01;
    scale_max=10.0;

    //是否去掉滚动条
   setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
   setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //setDragMode(QGraphicsView::ScrollHandDrag);
    setOptimizationFlags(QGraphicsView::DontSavePainterState);
    setTransformationAnchor(QGraphicsView::AnchorUnderMouse);// view根据鼠标下的点作为锚点
    setViewportUpdateMode(QGraphicsView::FullViewportUpdate);//若没有FullViewportUpdate,QGraphicsview平移与缩放后有的item显示不完整
    //setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    setRenderHint(QPainter::Antialiasing);

    //设置view窗口透明
    //setStyleSheet("background:transparent; border:0px;");//无边框，背景透明

    setStyleSheet("background:transparent;border-style:solid;border-width:1px;border-color:rgba(255, 225, 125, 80);");
    //setWindowFlags(Qt::FramelessWindowHint);

    connect(this->horizontalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(horizontalBar(int)));
    connect(this->verticalScrollBar(),SIGNAL(valueChanged(int)),this,SLOT(verticallBar(int)));


}

MapView::~MapView()
{


}

/**********************平移速度*****************************/
void MapView::setTranslateSpeed(qreal speed)
{
    //建议平移速度范围
    Q_ASSERT_X(speed>=0.0&&speed<=2.0,"MapView::setTranslateSpeed","Speed shoud be in range [0.0,2.0]");

    m_translateSpeed=speed;
}

qreal MapView::translateSpeed() const
{
    return m_translateSpeed;
}

/**********************缩放增量****************************/
void MapView::setZoomDelta(qreal delta)
{
    //建议缩放增量范围
    Q_ASSERT_X(delta>=0.0&&delta<=1.0,"MapView::setZoomDelta","Delta shoud be in range [0.0,1.0]");

    m_zoomDelta=delta;

}

qreal MapView::zoomDelta() const
{
    return m_zoomDelta;
}

/**********************设置缩放范围****************************/
void MapView::setZoomRange(double _min, double _max)
{
    scale_min=_min;
    scale_max=_max;
}

/*****键盘事件--上/下/左/右键向各个方向移动、加/减进行缩放、空格键/回车键旋转*****/
void MapView::keyPressEvent(QKeyEvent *event)
{
//    qDebug()<<"keypressevent";
    int key_value=event->key();

    switch (key_value)
    {
    case Qt::Key_Up:key_translate(QPointF(0,-5));//向上平移
                                 is_following=false;
    break;
    case Qt::Key_Down:key_translate(QPointF(0,5));//向下平移
            is_following=false;
    break;
    case Qt::Key_Left:key_translate(QPointF(-5,0));//向左平移
            is_following=false;
    break;
    case Qt::Key_Right:key_translate(QPointF(5,0));//向右平移
            is_following=false;
    break;
    case Qt::Key_Plus:zoomIn();//放大
    break;
    case Qt::Key_Minus:zoomOut();//缩小
    break;
    case Qt::Key_Space:rotate(-5);//逆时针旋转
    break;
    case Qt::Key_Enter:
    case Qt::Key_Return:rotate(5);//顺时针旋转
    break;
    default:QGraphicsView::keyPressEvent(event);
    break;
    }
}

/*******************鼠标事件--平移********************/
void MapView::mouseMoveEvent(QMouseEvent *event)
{
    if(m_bMouseTranslate)
    {
        is_following=false;
        QPointF mouseDelta=mapToScene(event->pos())-mapToScene(m_lastMousePos);
        key_translate(mouseDelta);
    }

    m_lastMousePos=event->pos();
    QGraphicsView::mouseMoveEvent(event);

}

/*******************鼠标事件--按下********************/
void MapView::mousePressEvent(QMouseEvent *event)
{

    QList<QGraphicsItem *> itemslist=this->items();
//     qDebug()<<"itmes.count:"<<itemslist.count();
    if(event->button()==m_translateButton)
    {
        setCursor(Qt::OpenHandCursor);
        // //当光标下没有item时，才能移动
        QPointF point=mapToScene(event->pos());
        //if(scene()->itemAt(point,transform())==NULL)
       // {
            m_bMouseTranslate=true;
            m_lastMousePos=event->pos();

       // }
    }
    QGraphicsView::mousePressEvent(event);

}

/*******************鼠标事件--释放********************/
void MapView::mouseReleaseEvent(QMouseEvent *event)
{
    setCursor(Qt::ArrowCursor);
    if(event->button()==m_translateButton)
        m_bMouseTranslate=false;

    QGraphicsView::mouseReleaseEvent(event);

}

/*******************鼠标事件--双击********************/
void MapView::mouseDoubleClickEvent(QMouseEvent *event)
{
    emit mousedoubleclick_centeron();
    //qDebug()<<"mapview mousedoubleclick";
    QGraphicsView::mouseDoubleClickEvent(event);
}

/*******************鼠标滚轮事件--放大缩小***************************/
void MapView::wheelEvent(QWheelEvent *event)
{
    //滚轮的滚动量
    QPoint scrollAmount=event->angleDelta();
    //正值表示放大，负值表示缩小
    scrollAmount.y()>0 ? zoomIn() : zoomOut();
}

void MapView::zoomIn()
{
    zoom(1+m_zoomDelta);
}

void MapView::zoomOut()
{
    zoom(1-m_zoomDelta);
}

void MapView::zoom(double scaleFactor)
{
    //防止过小或过大
    qreal factor=transform().scale(scaleFactor,scaleFactor).mapRect(QRectF(0,0,1,1)).width();
    if(factor<scale_min||factor>scale_max)
        return;

    scale(scaleFactor,scaleFactor);
    m_scale*=scaleFactor;//

    this->update();

}

/*******************键盘控制--平移********************/
void MapView::key_translate(QPointF delta)
{
    //根据当前zoom缩放平移数
    delta*=m_scale;
    delta*=m_translateSpeed;

     // 第一种方法-采用滚动条：通过设置滚动条的值进行平移
    int current_x=current_horizontalvalue-delta.x();
    int current_y=current_verticalvalue-delta.y();
    // 设置水平滚动条
    if(current_x>=this->horizontalScrollBar()->minimum()&&current_x<=this->horizontalScrollBar()->maximum())
    {
         this->horizontalScrollBar()->setValue(current_x);
         current_horizontalvalue=current_x;
    }
    else if(current_x<this->horizontalScrollBar()->minimum())
    {
        this->horizontalScrollBar()->setValue(this->horizontalScrollBar()->minimum());
        current_horizontalvalue=this->horizontalScrollBar()->minimum();

    }
    else
    {
        this->horizontalScrollBar()->setValue(this->horizontalScrollBar()->maximum());
        current_horizontalvalue=this->horizontalScrollBar()->maximum();
    }

    // 设置垂直滚动条
    if(current_y>=this->verticalScrollBar()->minimum()&&current_y<=this->verticalScrollBar()->maximum())
    {
        this->verticalScrollBar()->setValue(current_y);
        current_verticalvalue=current_y;
    }
    else if(current_y<this->verticalScrollBar()->minimum())
    {
        this->verticalScrollBar()->setValue(this->verticalScrollBar()->minimum());
        current_verticalvalue=this->verticalScrollBar()->minimum();
    }
    else
    {
        this->verticalScrollBar()->setValue(this->verticalScrollBar()->maximum());
        current_verticalvalue=this->verticalScrollBar()->maximum();
    }

    this->update();

}

void MapView::horizontalBar(int value)
{
    current_horizontalvalue=value;
  // toemit_view_changedSignals();
}

void MapView::verticallBar(int value)
{
    current_verticalvalue=value;
   // toemit_view_changedSignals();
}















































































































