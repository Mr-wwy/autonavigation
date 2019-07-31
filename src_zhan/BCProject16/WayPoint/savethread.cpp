#include "savethread.h"

extern QStandardItemModel *tablemodel_load;
extern int filerow;
extern QString fileName;

savethread::savethread(QObject *parent): QThread(parent)
{

}

savethread::~savethread()
{

    quit();
    wait();
}

void savethread::run()
{
    FILE *fp=NULL;
    if(QFileInfo(fileName).suffix().isEmpty())
    {
        fileName.append(".txt");
    }

    QByteArray StrToCharTemp = fileName.toLatin1();
    char *tempchar=StrToCharTemp.data();
    stat(tempchar,&filestatbuf2);

    emit savefile_start(filerow,filestatbuf2.st_size);

    fp=fopen(tempchar,"w+");
    for(int i=0;i<tablemodel_load->rowCount();i++)
    {
        fprintf(fp, "%d %ld %d %lf %lf %ld %ld %d %d\n",
                i,
                tablemodel_load->item(i,1)->text().toLong(&ok,10),
                tablemodel_load->item(i,2)->text().toInt(&ok,10),
                tablemodel_load->item(i,3)->text().toDouble(),
                tablemodel_load->item(i,4)->text().toDouble(),
                tablemodel_load->item(i,5)->text().toLong(&ok,10),
                tablemodel_load->item(i,6)->text().toLong(&ok,10),
                tablemodel_load->item(i,7)->text().toInt(&ok,10),
                tablemodel_load->item(i,8)->text().toInt(&ok,10));
        emit savefile_runing(i);
    }

    fclose(fp);

    usleep(100000);       //wait 100ms否则可能会出现保存对话框异常无法关闭的情况
    emit savefile_stop();
}














