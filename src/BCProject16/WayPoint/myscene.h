#ifndef MYSCENE_H
#define MYSCENE_H

#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QMenu>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsItem>
#include <QInputDialog>
#include <QString>
#include <QColorDialog>
#include <QGraphicsScene>
#include <QPropertyAnimation>
#include <QTableWidget>
#include <QMessageBox>
#include <QString>
#include <QStandardItemModel>

#include "myitem.h"
#include "setspeed.h"
#include "deleteitemthread.h"

class myscene : public QGraphicsScene
{
    Q_OBJECT
public:
    myscene(QObject *parent=0);
    ~myscene();

    void return2startpos();
    void clearmarker();

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);

public slots:
    void setsmaxminpeed(int min,int max);
    void deleteItem_slot(int _type,int _num, int _row,QString _line_num);
    void deleteItem_overslot();

public:
    QList<QGraphicsItem *> myItems;
    int input_int;
    bool ok;
    setspeed *Setspeed;
    DeleteItemThread *m_deleteitemthread;

    bool m_bMouseTranslate;
    bool m_MouseMove;
    bool m_MousePressed;
    bool isdeleting;

    QPointF m_makerstartpos;

};

#endif // MYSCENE_H
