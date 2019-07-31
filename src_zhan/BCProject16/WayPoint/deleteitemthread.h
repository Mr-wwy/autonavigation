#ifndef DELETEITEMTHREAD_H
#define DELETEITEMTHREAD_H

#include <QThread>
#include <QList>
#include <QGraphicsItem>

#include "myitem.h"

class DeleteItemThread : public QThread
{
    Q_OBJECT

public:
    DeleteItemThread(QList<QGraphicsItem *> list_items);
    ~DeleteItemThread();

protected:
    void run();

public:
    void stop();

signals:
    void deleteItem(int _type,int _num, int _row, QString _line_num);
    void deleteItem_over();

public:
    QList<QGraphicsItem *> m_list_items;

};

#endif // DELETEITEMTHREAD_H






































































