#include "speed.h"
#include "ui_speed.h"
#include<QPainter>
#include<QImage>
#include <QDebug>
#include <QLCDNumber>

Speed::Speed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Speed)
{
    ui->setupUi(this);
  //  ui->label->setStyleSheet("border-image:url(:/KM/image/MPH.png)");
    m_pointX = 185;
    m_pointY = 185;
    m_degreespeed=0;
}

void Speed::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    drawMark(&painter);//画刻度，数字
    drawIndicator(&painter);//画指针

//    painter.setPen(QPen(QColor(115,115,115,255),3));
//    painter.drawEllipse(QPointF(185,200), 150, 150);
//    painter.setPen(QPen(QColor(168,168,168,255),3));
//    painter.drawEllipse(QPointF(185,200), 152, 152);
//    painter.setBrush(QBrush(Qt::red));
//    painter.setPen(QPen(Qt::red));
//    painter.translate(m_pointX,m_pointY);
//    if(m_degreespeed<=20)
//    {
//        painter.rotate(-36+0.6*m_degreespeed);
//    }
//    else
//    {
//        painter.rotate(-36+12+1.2*(m_degreespeed-20));
//    }

//    //
//    static const QPointF points[3] = {QPointF(185,195), QPointF(70, 200), QPointF(185, 205)};
//    painter.translate((0 - m_pointX),(0-m_pointY));
//    painter.drawPolygon(points, 3);
}
//画刻度，数字
void Speed::drawMark(QPainter *painter)
{
    painter->save();
    painter->setPen(Qt::white);
    painter->translate(m_pointX, m_pointY);

    qreal dAngle=(qreal)270/120;
    qreal startAngle=45;
    int value=0;
    QString strValue;
    for(int i=0;i<=120;i++)
    {
        painter->save();
        painter->setPen(Qt::blue);
        painter->rotate(startAngle);

        if(i%10==0)
        {
            QFont font;
            font.setPointSize(20);  //设置字体大小
            painter->setFont(font);
            strValue=tr("%1").arg(value);
            qreal textWidth=fontMetrics().width(strValue);
            qreal textHeight=fontMetrics().height();
            QPointF bottomPot(0,m_pointY-FIFTY);
            QPointF topPot(0,m_pointY-THIRTY);
            painter->drawLine(bottomPot,topPot);
            value+=10;

            //painter->save();
            QPointF textPot(0-textWidth/2,m_pointY-FIFTY-THREE-textHeight);
            painter->translate(textPot);
            painter->rotate(180);
            painter->drawText(QPointF(-textWidth-SEVEN,textHeight/2),strValue);
            //painter->restore();
        }
        else if(i%5==0)
        {
            QPointF bottomPot(0,m_pointY-FIFTY+THREE);
            QPointF topPot(0,m_pointY-THIRTY);
            painter->drawLine(bottomPot,topPot);

        }
        else
        {
            QPointF bottomPot(0,m_pointY-FIFTY+SEVEN);
            QPointF topPot(0,m_pointY-THIRTY);
            painter->drawLine(bottomPot,topPot);
        }
        painter->restore();
        startAngle+=dAngle;
    }
    painter->restore();
}
//画指针
void Speed::drawIndicator(QPainter *painter)
{
    painter->save();
    painter->setPen(QPen(QColor(115,115,115,255),3));
    painter->drawEllipse(QPointF(185,185), 150, 150);
    painter->setPen(QPen(QColor(168,168,168,255),3));
    painter->drawEllipse(QPointF(185,185), 152, 152);
    painter->setBrush(QBrush(Qt::red));
    painter->setPen(QPen(Qt::red));
    painter->translate(m_pointX,m_pointY);//改变坐标原点
    painter->rotate(-45+2.25*m_degreespeed);
    //各个点的坐标
    static const QPointF points[3] = {QPointF(185,180), QPointF(185, 190), QPointF(45, 185)};
    painter->translate((0 - m_pointX),(0-m_pointY));
    painter->drawPolygon(points, 3); //绘制多边形
    painter->restore();
}

void Speed::change_Speed(qreal temp,int temp_shift)
{
    m_degreespeed=temp;
    ui->lcdNumber->display(temp);
    //换档命令0:P,1:R,2:N,3:D,4:S,5:L
    if(temp_shift==0)
    {
        ui->label_3->setText("P");
    }
    else if(temp_shift==1)
    {
        ui->label_3->setText("R");
    }
    else if(temp_shift==2)
    {
        ui->label_3->setText("N");
    }
    else if(temp_shift==3)
    {
        ui->label_3->setText("D");
    }
    else if(temp_shift==4)
    {
        ui->label_3->setText("S");
    }
    else if(temp_shift==5)
    {
        ui->label_3->setText("L");
    }

    this->update();

}
Speed::~Speed()
{
    delete ui;
}
