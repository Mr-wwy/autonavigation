#include "myindicator.h"

MyIndicator::MyIndicator(QWidget *parent) :
        QWidget(parent)
{
    this->initVariables();
}

void MyIndicator::initVariables()
{

    m_value=0;
    m_currValue=0;
    m_bReverse=false;

    m_topSpace=0;
    m_leftSpace=0;
    m_lcdWidth=0;
    m_lcdHeight=0;
    forecolor=Qt::darkGreen;

    updateTimer=new QTimer(this);
    updateTimer->setInterval(1);
    connect(updateTimer,SIGNAL(timeout()),this,SLOT(UpdateData()));
}


void MyIndicator::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing);
    drawVariables(&painter);
    drawBackground(&painter);
    //drawLCDNums(&painter);
    drawRect(&painter);
    drawGraph(&painter);
    drawBars(&painter);
}

/*******************设置绘制大小********************/
void MyIndicator::drawVariables(QPainter *painter)
{
    m_leftSpace=width()/10;
    m_topSpace=height()/25;
    m_lcdWidth=(width()-(width()/5))/3;
    m_lcdHeight=height()/12;

    QPointF topLeftPot(m_leftSpace,m_topSpace);
    m_rectTopLeft=topLeftPot;
    //QPointF bottomRightPot(width()-m_leftSpace,height()-2*m_topSpace-m_lcdHeight);
    QPointF bottomRightPot(width()-m_leftSpace,height()-m_topSpace);
    m_rectBottomRight=bottomRightPot;
}
/*******************画背景********************/
void MyIndicator::drawBackground(QPainter* painter)
{
    painter->save();

    QLinearGradient bgGradient(QPointF(0,0),QPointF(width(),0));
    bgGradient.setColorAt(0.0,QColor(30,30,30));
    bgGradient.setColorAt(0.1,QColor(30,30,30));
    bgGradient.setColorAt(0.9,QColor(30,30,30));
    bgGradient.setColorAt(1.0,QColor(30,30,30));

    painter->setPen(Qt::NoPen);
    painter->setBrush(bgGradient);
    painter->drawRect(rect());
    painter->restore();
}

void MyIndicator::drawLCDNums(QPainter* painter)
{
    painter->save();

    painter->restore();
}
/*******************画外框矩形********************/
void MyIndicator::drawRect(QPainter* painter)
{
    painter->save();
    QRectF theRect(m_rectTopLeft,m_rectBottomRight);
    painter->setPen(QPen(INDICATOR_FRAME_COLOR,INDICATOR_PEN_WIDTH));
    painter->setBrush(QBrush(INDICATOR_FRAME_COLOR,Qt::Dense7Pattern));
    painter->drawRect(theRect);
    painter->restore();
}

void MyIndicator::SetForeColor(QColor c)
{
    this->forecolor=c;
}

/*******************画中间矩形********************/
void MyIndicator::drawGraph(QPainter *painter)
{
    painter->save();
    painter->setPen(QPen(Qt::transparent,INDICATOR_PEN_WIDTH));

    QLinearGradient graphGradient(m_rectTopLeft,QPointF(m_rectTopLeft.x(),m_rectBottomRight.y()));
    graphGradient.setColorAt(0.0,forecolor);
    painter->setBrush(graphGradient);

    qreal dY=(qreal)(m_rectTopLeft.y()-m_rectBottomRight.y())/100;
    //qreal yValue=dY*m_currValue;//会采用定时器，逐次递增/递减
    qreal yValue=dY*m_value;//直接到达

    QPointF topLeftPot(m_rectTopLeft.x()+INDICATOR_PEN_WIDTH,m_rectBottomRight.y()+yValue);
    QPointF bottomRightPot(m_rectBottomRight.x()-INDICATOR_PEN_WIDTH,m_rectBottomRight.y());
    QRectF graphRect(topLeftPot,bottomRightPot);
    painter->drawRect(graphRect);

    painter->restore();
}
/*******************画中间横条********************/
void MyIndicator::drawBars(QPainter* painter)
{
    painter->save();
    painter->setPen(QPen(INDICATOR_FRAME_COLOR,INDICATOR_PEN_WIDTH));

    qreal left=m_rectTopLeft.x();
    qreal right=m_rectBottomRight.x();

    qreal top=m_rectTopLeft.y();
    qreal bottom=m_rectBottomRight.y();
    qreal increment=(bottom-top)/10;

    while(top<bottom)
    {
        QPointF leftPot(left,top);
        QPointF rightPot(right,top);
        painter->drawLine(leftPot,rightPot);
        top+=increment;
    }
    painter->restore();

}

void MyIndicator::UpdateData()
{
    if(m_bReverse)
    {
        m_currValue--;
        if(m_currValue<=m_value)
        {
            updateTimer->stop();
        }
    }
    else
    {
        m_currValue++;
        if(m_currValue>=m_value)
        {
            updateTimer->stop();
        }
    }
    update();
}


void MyIndicator::setValue(int value)
{
    if(m_value==value)
    {
        return ;
    }

    if(value>m_value)
    {
        m_bReverse=false;
    }else{
        m_bReverse=true;
    }
    m_value=value;

    updateTimer->start();
}

































