#ifndef SAVETHREAD_H
#define SAVETHREAD_H
#include <sys/stat.h>
#include <unistd.h>

#include <QThread>
#include <QProgressBar>
#include <QTableWidget>
#include <QStandardItemModel>
#include <QDebug>
#include <QFileInfo>

#include "myprogressbar.h"

class savethread : public QThread
{
    Q_OBJECT
public:
    savethread(QObject *parent);
    ~savethread();

protected:
    void run();

public:
    bool ok;
    struct stat filestatbuf2;

signals:
    void savefile_start(int file_row,int file_size);
    void savefile_stop();
    void savefile_runing(int currentrow);

private:

};

#endif // SAVETHREAD_H








































































