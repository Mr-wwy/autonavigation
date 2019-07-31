#include "deleteitemthread.h"

#include <QStandardItem>


DeleteItemThread::DeleteItemThread(QList<QGraphicsItem *> list_items)
{
    m_list_items=list_items;

}

DeleteItemThread::~DeleteItemThread()
{
    quit();
    wait();
}


void DeleteItemThread::run()
{
    if(!m_list_items.isEmpty())
    {
        int _type=0;
        int _row=0;
        QString _line_num;
        for(int i=m_list_items.count()-1;i>=0;i--)
        {
            Myitem *item=static_cast<Myitem *>(m_list_items.at(i));
            if(item->line_num<0)
            {
                if(item->line_num==-1)
                {
                    _type=-1;

                }
                else if(item->line_num==-2)
                {
                    _type=-2;
                }
            }
            else
            {
                _type=0;
                _line_num=QString::number(item->line_num);
//                QList<QStandardItem*> list_item=tablemodel_load->findItems(_line_num);
//                _row=list_item.at(0)->row();    //当前行数

            }
            emit deleteItem(_type,i,_row,_line_num);

        }

        emit deleteItem_over();


    }
}

void DeleteItemThread::stop()
{

}




























































































