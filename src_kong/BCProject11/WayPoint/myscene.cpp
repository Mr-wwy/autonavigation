#include "myscene.h"

extern QStandardItemModel *tablemodel_load;
extern QStandardItemModel *tablemodel_look;//表格显示类
extern int filerow;

Myitem *marker_start;
Myitem *marker_end;

int BB=-1;
int CC=-1;
extern int AA;

myscene::myscene(QObject *parent):QGraphicsScene(parent)
{
    marker_start=NULL;
    marker_end=NULL;

    myItems.clear();

    m_bMouseTranslate=false;
    m_MouseMove=false;
    m_MousePressed=false;
    isdeleting=false;

    m_deleteitemthread=0;

    m_makerstartpos=QPointF(0,0);

    Setspeed=new setspeed();
    Setspeed->setMaximumSize(196, 100);
    Setspeed->setWindowModality(Qt::ApplicationModal);
    connect(Setspeed,SIGNAL(getspeed(int,int)),this,SLOT(setsmaxminpeed(int,int)));
}

myscene::~myscene()
{

}

/***********************************鼠标按下事件***************************************/
void myscene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(m_MousePressed) return;
    if(event->button()==Qt::RightButton)
    {
        QGraphicsItem *itemToRemove = NULL;
        foreach (QGraphicsItem *item, items(event->scenePos()))
        {
                itemToRemove = item;
                break;
        }
        if (itemToRemove != NULL)
        {
            QMenu menu;
            //QAction* moveAction1=menu.addAction(tr("删除路点"));
            QAction* moveAction2=menu.addAction(tr("标记路点"));
            QAction* moveAction3=menu.addAction(tr("查看路点属性"));
            //QAction* moveAction4=menu.addAction("添加区域");
            QAction* moveAction5=menu.addAction(tr("设置速度"));
            QAction* moveAction6=menu.addAction(tr("仿真起始点"));
            QAction* moveAction7=menu.addAction(tr("仿真结束点"));

            QAction* selectedAction=menu.exec(event->screenPos());

//            if(selectedAction==moveAction1)
//            {

//                if (!selectedItems().isEmpty())
//                {
//                    if(!isdeleting)
//                    {
//                        m_deleteitemthread=new DeleteItemThread(selectedItems());
//                        connect(m_deleteitemthread,SIGNAL(deleteItem(int,int,int,QString)),this,SLOT(deleteItem_slot(int,int,int,QString)));;
//                        connect(m_deleteitemthread,SIGNAL(deleteItem_over()),this,SLOT(deleteItem_overslot()));
//                        m_deleteitemthread->start();
//                        isdeleting=true;
//                    }

//                }

//            }
//            else
            if(selectedAction==moveAction2)
            {
                QColor color=QColorDialog::getColor(Qt::red,0,tr("选择标记的颜色"));
                if(!color.isValid())
                    return;

                if (!selectedItems().isEmpty())
                {
                    for(int i=0;i<selectedItems().size();i++)
                    {
                        Myitem *item=static_cast<Myitem *>(selectedItems().at(i));
                        if(item->line_num<0)
                        {
                            //qDebug()<<"marker";
                            continue;
                        }
                        item->defaultColor=color;
                        item->update();
                    }

                    this->update();
                }

            }
            else if(selectedAction==moveAction3)
            {
                if (!selectedItems().isEmpty())
                {
                    tablemodel_look->removeRows(0,tablemodel_look->rowCount());

                    for(int i=0;i<selectedItems().size();i++)
                    {
                        Myitem *item=static_cast<Myitem *>(selectedItems().at(i));
                        if(item->line_num<0)
                        {
                            continue;
                        }                     
                        QList<QStandardItem*> list_item;
                        QStandardItem *item_num=new QStandardItem(QString::number(item->line_num));
                        QStandardItem *item_gaussx=new QStandardItem(QString::number(item->gaussX));
                        QStandardItem *item_gaussy=new QStandardItem(QString::number(item->gaussY));
                        list_item.append(item_num);
                        list_item.append(item_gaussx);
                        list_item.append(item_gaussy);

                        tablemodel_look->appendRow(list_item);

                    }
                }
            }
//            else if(selectedAction==moveAction4)
//            {
//                bool ok;
//                input_int=QInputDialog::getInt(NULL,"添加区域","输入半径大小:",100,0,1000,10,&ok);
//                QColor color=QColorDialog::getColor(Qt::red,NULL,"选择标记的颜色:");
//                for(int i=0;i<selectedItems().size();i++)
//                {
//                    Myitem *item=static_cast<Myitem *>(selectedItems().at(i));
//                    if(item->line_num<0)
//                    {
//                        qDebug()<<"marker";
//                        continue;
//                    }

//                    QGraphicsEllipseItem *add_input_item=new QGraphicsEllipseItem(selectedItems().at(i)->pos().x()+10-input_int/2,selectedItems().at(i)->pos().y()+10-input_int/2,input_int,input_int);
//                    add_input_item->childItems();
//                    add_input_item->setPen(QPen(color));
//                    addItem(add_input_item);
//                }
//            }
            else if(selectedAction==moveAction5)
            {
                if(selectedItems().size()>0)
                {
                    myItems.clear();
                    for(int i=0;i<selectedItems().size();i++)
                    {
                        Myitem *item=static_cast<Myitem *>(selectedItems().at(i));
                        if(item->line_num<0)
                        {
                            //qDebug()<<"marker";
                            continue;
                        }
                        myItems.append(selectedItems().at(i));

                    }
                    Setspeed->show();
                }
                else
                {
                    QMessageBox::critical(NULL,"错误","值错误!",QMessageBox::YesAll);
                }

            }
            else if(selectedAction==moveAction6)
            {
                if(selectedItems().size()==1)
                {
                    Myitem *item=static_cast<Myitem *>(selectedItems().first());
                    if(item->line_num<0)
                    {
                        return;
                    }

                    if(marker_start)
                    {
                        removeItem(marker_start);
                        delete marker_start;
                        marker_start=NULL;
                    }
                    QList<QStandardItem*> list_item=tablemodel_load->findItems(QString::number(item->line_num));
                    BB=list_item.at(0)->row();    //当前行数
                    //qDebug()<<"BB"<<BB;
                    marker_start=new Myitem();
                    marker_start->defaultColor=Qt::blue;
                    marker_start->line_num=-1;
                    m_makerstartpos=QPointF(selectedItems().at(0)->pos().x(),selectedItems().at(0)->pos().y());
                    marker_start->setPos(m_makerstartpos);  //当前item的scene坐标
                    //marker_start->setPos(selectedItems().at(0)->pos().x(),selectedItems().at(0)->pos().y());
                    marker_start->setZValue(2);
                    addItem(marker_start);
                }
                this->update();
            }
            else if(selectedAction==moveAction7)
            {
                if(selectedItems().size()==1)
                {
                    Myitem *item=static_cast<Myitem *>(selectedItems().first());
                    if(item->line_num<0)
                    {
                        return;
                    }

                    if(marker_end)
                    {
                        removeItem(marker_end);
                        delete marker_end;
                        marker_end=NULL;
                    }
                    QList<QStandardItem*> list_item=tablemodel_load->findItems(QString::number(item->line_num));
                    CC=list_item.at(0)->row();    //当前行数
                    //qDebug()<<"CC"<<CC;
                    marker_end=new Myitem();
                    marker_end->defaultColor=Qt::red;
                    marker_end->line_num=-2;
                    marker_end->setPos(selectedItems().at(0)->pos().x(),selectedItems().at(0)->pos().y());//当前item的scene坐标
                    marker_end->setZValue(3);
                    addItem(marker_end);
                }
                this->update();

            }
        }
    }
    else if(event->button()==Qt::LeftButton)
    {
        QGraphicsItem *itemToRemove = NULL;
        itemToRemove=mouseGrabberItem();
        m_bMouseTranslate=true;
        //qDebug()<<"mousePressEvent"<<m_bMouseTranslate;
    }
    m_MousePressed=true;
    QGraphicsScene::mousePressEvent(event);
}

/***********************************鼠标移动事件***************************************/
void myscene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    //因为item设置为setFlag(QGraphicsItem::ItemIsMovable屏蔽了鼠标移动事件，故scene无法响应鼠标移动事件   ???
    //可以响应鼠标移动事件，只是无法监听鼠标左右键
    if(m_bMouseTranslate)
    {
        //qDebug()<<"mouseMoveEvent leftbutton";
        m_MouseMove=true;
    }
    QGraphicsScene::mouseMoveEvent(event);
}

/***********************************鼠标释放事件***************************************/
void myscene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button()==Qt::LeftButton&&m_bMouseTranslate&&m_MouseMove)
    {       
        //qDebug()<<"release selectItems().count:"<<selectedItems().count();
//        if (!selectedItems().isEmpty())
//        {
//            for(int i=selectedItems().count()-1;i>=0;i--)
//            {
//                Myitem *item=static_cast<Myitem *>(selectedItems().at(i));
//                if(item->line_num<0)
//                {
//                    continue;
//                }
//                else
//                {
//                    QList<QStandardItem*> list_item=tablemodel_load->findItems(QString::number(item->line_num));//找到当前scene中选择item在表格中对应的那一行item
//                    int current_row=list_item.at(0)->row();     //对应在表格中的当前行数
//                    long gaussx=item->scenePos().x();           //scene中的x坐标
//                    long gaussy=(-1)*item->scenePos().y();      //scene中的y坐标取相反数赋给表格的gaussy
//                    QStandardItem *item_gaussx=new QStandardItem(QString::number(gaussx));
//                    QStandardItem *item_gaussy=new QStandardItem(QString::number(gaussy));
//                    tablemodel_load->setItem(current_row,5,item_gaussx);
//                    tablemodel_load->setItem(current_row,6,item_gaussy);
//                }

//            }
//        }

    }
    m_bMouseTranslate=false;
    m_MouseMove=false;
    m_MousePressed=false;
    QGraphicsScene::mouseReleaseEvent(event);

}

/***********************************键盘按下事件***************************************/
void myscene::keyPressEvent(QKeyEvent *event)
{
//    if(event->key() == Qt::Key_Delete)
//    {
//        if (!selectedItems().isEmpty())
//        {
//            if(!isdeleting)
//            {
//                m_deleteitemthread=new DeleteItemThread(selectedItems());
//                connect(m_deleteitemthread,SIGNAL(deleteItem(int,int,int,QString)),this,SLOT(deleteItem_slot(int,int,int,QString)));;
//                connect(m_deleteitemthread,SIGNAL(deleteItem_over()),this,SLOT(deleteItem_overslot()));
//                m_deleteitemthread->start();
//                isdeleting=true;
//            }
//         }
//     }
    QGraphicsScene::keyPressEvent(event);

}

/***********************************设置最小最大速度***************************************/
void myscene::setsmaxminpeed(int min,int max)
{
    int dec;
    for(int j=0;j<myItems.size();j++)
    {
        Myitem *item=static_cast<Myitem *>(myItems.at(j));
        dec=item->expect_speed;

        if(dec<min)
        {
            QList<QStandardItem*> list_item=tablemodel_load->findItems(QString::number(item->line_num));
            int current_row=list_item.at(0)->row();    //当前行数
            QStandardItem *item_speed=new QStandardItem(QString::number(min));
            tablemodel_load->setItem(current_row,7,item_speed);
            item->expect_speed=dec;

        }
        else if(dec>max)
        {
            QList<QStandardItem*> list_item=tablemodel_load->findItems(QString::number(item->line_num));
            int current_row=list_item.at(0)->row();    //当前行数
            QStandardItem *item_speed=new QStandardItem(QString::number(max));
            tablemodel_load->setItem(current_row,7,item_speed);
            item->expect_speed=dec;
        }

    }

    Setspeed->close();

    this->update();

}

/********************************使仿真起始点回到开始位置**************************************/
void myscene::return2startpos()
{
    if(marker_start!=NULL)
    {
        marker_start->setPos(m_makerstartpos);
    }

}

/*********************************清除仿真起始点与结束点**************************************/
void myscene::clearmarker()
{

}

void myscene::deleteItem_slot(int _type,int _num, int _row, QString _line_num)
{
    if(_type>=0)
    {
        QList<QStandardItem*> list_item=tablemodel_load->findItems(_line_num);
        int delete_row=list_item.at(0)->row();    //当前行数
        tablemodel_load->removeRow(delete_row);
        removeItem(selectedItems().at(_num));
        filerow--;

    }
    else if(_type==-1)
    {
        //删除起始点
        removeItem(selectedItems().at(_num));
        delete marker_start;
        marker_start=NULL;

    }
    else if(_type==-2)
    {   //删除结束点
        removeItem(selectedItems().at(_num));
        delete marker_end;
        marker_end=NULL;

    }
    else
    {

    }

}


void myscene::deleteItem_overslot()
{
    m_deleteitemthread->stop();
    m_deleteitemthread->quit();
    m_deleteitemthread=0;

    isdeleting=false;
    this->update();

}











































































