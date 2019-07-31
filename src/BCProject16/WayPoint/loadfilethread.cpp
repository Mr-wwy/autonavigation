#include "loadfilethread.h"

#include <QFile>
#include <QList>
#include <QString>
#include <QTextStream>
#include <QMessageBox>

extern QString fileName;
extern int filerow;

loadfilethread::loadfilethread(QObject *parent) : QThread(parent)
{


}

loadfilethread::~loadfilethread()
{
    //terminate();
    quit();
    wait();

}

void loadfilethread::run()
{
    //在线程中tablemodel或者tablewidget清除时，程序会异常结束，出现SIGSEGV/segmentation fault
    //或者在线程中执行一些其他的语句(即myprogress->show()等语句时)也会出错（原因：？？？）
    /* 总结：在线程中尽量不要对控件进行操作，特别是增删数据等 */
    /*tablemodel->removeRows(0,tablemodel->rowCount());   */        //清除原先数据

    FILE *fp=NULL;

    QByteArray StrToCharTemp = fileName.toLatin1();
    char *tempchar=StrToCharTemp.data();
    stat(tempchar,&filestatbuf);

    filerow=0;

    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        //QMessageBox::information(this,tr("Warning!"),tr("Failed to open file."));
        file.close();
        qDebug()<<"file open error";
        return;
    }


    QTextStream in(&file);


    while(!in.atEnd())
    {
        in.readLine();
        filerow++;
    }

    emit loadfile_start(filerow,filestatbuf.st_size);

    in.seek(0); //   从头开始读取
    int i=0;
    QString text;
    while(!in.atEnd())
    {
        memset(&temp_export,0,sizeof(struct File_Type));
        text=in.readLine();//读取每一行

        //string.split();//这个函数把所有由sep分隔的块装进一个QStringList中返回
        QStringList str_list= text.split(" ", QString::SkipEmptyParts);
        if(str_list.count()!=9)
        {
            QMessageBox::warning(0,tr("Warning!"),tr("文件内容格式不对"));
            break;
        }
        temp_export.line_num=str_list.at(0).toInt();
        temp_export.millisecond=str_list.at(1).toLong();
        temp_export.delta_distance=str_list.at(2).toInt();
        temp_export.longitude=str_list.at(3).toFloat();
        temp_export.latitude=str_list.at(4).toFloat();
        temp_export.gaussX=str_list.at(5).toInt();
        temp_export.gaussY=str_list.at(6).toInt();
        temp_export.expect_speed=str_list.at(7).toInt();
        temp_export.point_type=str_list.at(8).toInt();

//        fp=fopen(tempchar,"r");
//        fseek(fp,filei,SEEK_SET);

//        memset(&temp_export,0,sizeof(struct File_Type));
//        fscanf(fp, "%d %ld %d %lf %lf %ld %ld %d %d",
//               &(temp_export.line_num),
//               &(temp_export.millisecond),
//               &(temp_export.delta_distance),
//               &(temp_export.longitude),
//               &(temp_export.latitude),
//               &(temp_export.gaussX),
//               &(temp_export.gaussY),
//               &(temp_export.expect_speed),
//               &(temp_export.point_type));

//      filei=ftell(fp);
//      if(feof(fp))
//      {
//         qDebug()<<"OVER!";
//         fclose(fp);
//         break;
//      }
//      fscanf(fp,"\n");
//      filei=ftell(fp);
//      fclose(fp);

      QList<QStandardItem*> list_item;

      QString item1_str=QString("%1").arg(temp_export.line_num);
      QStandardItem *item1=new QStandardItem(item1_str);
      list_item.append(item1);

      QString item2_str=QString("%1").arg(temp_export.millisecond);
      QStandardItem *item2=new QStandardItem(item2_str);
      list_item.append(item2);

      QString item3_str=QString("%1").arg(temp_export.delta_distance);
      QStandardItem *item3=new QStandardItem(item3_str);
      list_item.append(item3);

      QString item4_str=QString("%1").arg(temp_export.longitude);
      QStandardItem *item4=new QStandardItem(item4_str);
      list_item.append(item4);

      QString item5_str=QString("%1").arg(temp_export.latitude);
      QStandardItem *item5=new QStandardItem(item5_str);
      list_item.append(item5);

      QString item6_str=QString("%1").arg(temp_export.gaussX);
      QStandardItem *item6=new QStandardItem(item6_str);
      list_item.append(item6);

      QString item7_str=QString("%1").arg(temp_export.gaussY);
      QStandardItem *item7=new QStandardItem(item7_str);
      list_item.append(item7);

      QString item8_str=QString("%1").arg(temp_export.expect_speed);
      QStandardItem *item8=new QStandardItem(item8_str);
      list_item.append(item8);

      QString item9_str=QString("%1").arg(temp_export.point_type);
      QStandardItem *item9=new QStandardItem(item9_str);
      list_item.append(item9);

      i++;

      //emit getprovalue(i*100/filerow,filerow,filestatbuf.st_size);
      emit loadfile_runing(i,list_item);

    }

    file.close();
    in.flush();

    usleep(100000);       //wait 100ms否则可能会出现加载对话框异常无法关闭的情况
    emit loadfile_stop();
}
