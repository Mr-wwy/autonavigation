#include "myview.h"

#include <QDebug>

myview::myview(QWidget *parent): QGraphicsView(parent)
{

    m_compass=new Compass(this);
    m_compass->setGeometry(10,15,80,80);

}

myview::~myview()
{

}

//重载滚轮事件
void myview::wheelEvent(QWheelEvent *event)
{
    if (event->modifiers() & Qt::ControlModifier)
    {
        if (event->delta() > 0)
        {
            emit change1(20);
        }
        else
        {
            emit change2(20);
        }
    }
}

void myview::keyPressEvent(QKeyEvent *event)
{
    QGraphicsView::keyPressEvent(event);
}

void myview::setrotate(int num, qreal scale)
{

    m_compass->setRotate(num);

}































