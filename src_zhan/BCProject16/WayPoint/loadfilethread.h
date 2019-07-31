#ifndef LOADFILETHREAD_H
#define LOADFILETHREAD_H
#include <unistd.h>
#include <sys/stat.h>

#include <QThread>
#include <QObject>
#include <QProgressBar>
#include <QTableWidget>
#include <QDebug>
#include <QSpinBox>
#include <QStandardItemModel>
#include <QProgressDialog>
#include <QList>

#include "head.h"

class loadfilethread : public QThread
{
    Q_OBJECT
public:
    loadfilethread(QObject *parent=0);
    ~loadfilethread();

    void run();

    struct File_Type temp_export;
    struct stat filestatbuf;

signals:
    void loadfile_start(int file_row,int file_size);
    void loadfile_stop();
    void loadfile_runing(int currentrow, QList<QStandardItem*> list_item);

private:


};

#endif // LOADFILETHREAD_H























































