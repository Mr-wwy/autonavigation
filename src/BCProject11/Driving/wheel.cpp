#include "wheel.h"

#include <QDebug>
#include <QFont>

Wheel::Wheel(QWidget *parent) :
    QWidget(parent)
{
    m_steer=0;

    m_labelshift=new QLabel(this);
    QFont m_font("意大利体",20,50);
    m_labelshift->setFont(m_font);

    //新建时若没有设置大小则width()和height() 默认为30
    resetVariables();

}

Wheel::~Wheel()
{

}

void Wheel::resetVariables()
{
    //新建设置大小即setGeometry()后需要重新设置变量
    m_Radius=width()>height() ? height()/2 : width()/2;
    m_outerRadius=0.9*m_Radius;
    m_innerRadius=0.65*m_outerRadius;
    m_large=0.1*m_outerRadius;
    m_center=rect().center();

    m_labelshift->setGeometry(width()/2-10,height()/2-15,20,30);

}

void Wheel::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    resetVariables();   //新建设置大小即setGeometry()后需要重新设置变量

    painter.translate(m_center);
    painter.rotate(m_steer);

    drawTriangle(&painter);
    drawCircle(&painter);

    drawlabel(m_shift);

}

void Wheel::wheel_rotate(int steer,int shift)
{
    m_steer=steer;
    m_shift=shift;
    update();
}

void Wheel::drawTriangle(QPainter *painter)
{
    painter->save();

    painter->setPen(Qt::NoPen);
    painter->setBrush(QBrush(QColor(255,194,38,200)));

    QPointF points[3] = {QPointF(-m_outerRadius,2*m_large), QPointF(-m_outerRadius,-2*m_large), QPointF(-m_innerRadius+0.5*m_large, 0)};
    for(int i=0;i<3;i++)
    {
            painter->drawPolygon(points, 3);
            painter->rotate(-90);

    }
    painter->restore();

}

void Wheel::drawCircle(QPainter *painter)
{
    painter->save();

    QPointF new_center(0,0);
    //内圆
    painter->setPen(QPen(QColor(66,66,66,250),1.8*m_large));
    painter->drawEllipse(new_center,m_innerRadius,m_innerRadius);
    //外圆
    painter->setPen(QPen(QColor(30,30,30,250),2*m_large));
    painter->drawEllipse(new_center,m_outerRadius,m_outerRadius);
    //三个外圆弧
    drawgradientArc(painter, m_outerRadius+m_large, 150,  60, m_large*2, QColor(200, 200, 0,200));
    drawgradientArc(painter, m_outerRadius+m_large, 240, 60,m_large*2, QColor(200, 0, 200,200));
    drawgradientArc(painter, m_outerRadius+m_large, 330, 60, m_large*2, QColor(200, 200, 0,200));

    painter->restore();
}

/*****************************************画弧长*******************************************************/
void Wheel::drawgradientArc(QPainter *painter, int radius, int startAngle, int angleLength, int arcHeight, QColor color)
{
    /*
     * 参数二：半径
     * 参数三：开始的角度
     * 参数四：指扫取的角度-顺时针
     * 参数五：圆环的高度
     * 参数六：填充色
    */

    painter->save();

    // 渐变色
    QRadialGradient gradient(0, 0, radius);
    gradient.setColorAt(0, Qt::white);
    gradient.setColorAt(1.0, color);
    painter->setBrush(gradient);

    // << 1（左移1位）相当于radius*2 即：150*2=300
    //QRectF(-150, -150, 300, 300)
    QRectF rect(-radius, -radius, radius << 1, radius << 1);
    QPainterPath path;
    path.arcTo(rect, startAngle, angleLength);

    // QRectF(-120, -120, 240, 240)
    QPainterPath subPath;
    subPath.addEllipse(rect.adjusted(arcHeight, arcHeight, -arcHeight, -arcHeight));

    // path为扇形 subPath为椭圆
    path -= subPath;

    painter->setPen(Qt::NoPen);
    painter->drawPath(path);

    painter->restore();
}

void Wheel::drawlabel(int shift)
{
    if(shift==0)
    {
        m_labelshift->setText("P");
    }
    else if(shift==1)
    {
        m_labelshift->setText("R");
    }
    else if(shift==2)
    {
        m_labelshift->setText("N");
    }
    else if(shift==3)
    {
        m_labelshift->setText("D");
    }
    else if(shift==4)
    {
        m_labelshift->setText("S");
    }
    else if(shift==5)
    {
        m_labelshift->setText("L");
    }
}









































