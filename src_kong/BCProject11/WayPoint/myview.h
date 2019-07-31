#ifndef MYVIEW_H
#define MYVIEW_H
#include <unistd.h>

#include <QWidget>
#include <QGraphicsView>
#include <QWheelEvent>
#include <QStyle>
#include <QWidget>
#include <QTransform>
#include <QPaintEvent>
#include <QPainter>

#include "compass.h"

class myview : public QGraphicsView
{
    Q_OBJECT
public:
    myview(QWidget *parent=0);
    ~myview();

protected:
    void wheelEvent(QWheelEvent* event);
    void keyPressEvent(QKeyEvent* event);


signals:
   void change1(int);
   void change2(int);

public slots:
   void setrotate(int num,qreal scale);

public:

    Compass *m_compass;


};

#endif // MYVIEW_H
