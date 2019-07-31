#ifndef POINTWIDGET_H
#define POINTWIDGET_H

#include <QWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QDebug>
#include <QBoxLayout>
#include <QLabel>
#include <QSpinBox>
#include <QMessageBox>
#include <QFileDialog>
#include <QString>
#include <QInputDialog>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QTableWidget>
#include <QTreeWidget>
#include <QObject>
#include <QCloseEvent>
#include <QComboBox>

#include "emulation.h"
#include "myprogressbar.h"
#include "widgetbegin.h"
#include "loadfilethread.h"
#include "savethread.h"
#include "ftpwidget.h"
#include "myprogressbar.h"


namespace Ui {
class Widget;
}

class PointWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PointWidget(QWidget *parent = 0);
    ~PointWidget();
    void initwidget();
    void initData();
    int is_datafile();
    void setWidgetEnable(bool _enable);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void BeginGrabButt_clicked();
    void ExportFileButt_clicked();
    void SendFileButt_clicked();
 //   void EmulationButt_clicked();
 //   void TableButt_clicked();
    void OkButt_clicked();
    void OkButt2_clicked();
    void SaveFileButt_clicked();
    void tablechange_slot(int index);

public slots:
    void fptWidget_destoryed(QObject*);

    void loadfile_startslot(int file_row,int file_size);
    void loadfile_stopslot();
    void loadfile_runingslot(int currentrow, QList<QStandardItem*> list_item);

    void savefile_startslot(int file_row,int file_size);
    void savefile_stopslot();
    void savefile_runingslot(int currentrow);


signals:
    void tablechange_signal(int);


private:
    Ui::Widget *ui;
    FTPWidget *ftpwidget;    //ftp模块
    widgetbegin *widgetBegin;//采集数据类
    loadfilethread *loadfile;//读取数据类
    savethread *savefile;//保存数据类
    emulation *emulationfile;//仿真类

    QTableView *tableview_load;//加载表格显示类
    QTableView *tableview_look;//查看表格显示类

    QHBoxLayout *Hlayout;
    QHBoxLayout *Hlayout2;
    QVBoxLayout *Glayout;

    QPushButton *BeginGrabButt;
    QPushButton *ExportFileButt;
    QPushButton *SendFileButt;
    QPushButton *SaveFileButt;
 //   QPushButton *EmulationButt;
 //   QPushButton *TableButt;
    QPushButton *OkButt;
    QPushButton *OkButt2;
    QSpinBox *spinBoxRow_start;//起始行号
    QSpinBox *spinBoxRow_end;//终止行号

    QSpinBox *spinBoxSpeed_min;//最小速度
    QSpinBox *spinBoxSpeed_max;//最小速度
    QComboBox *comboxPointType;//数据点类型 0：无   1：起始点   2：加速点   3：速度保持点    4：减速点    5：终点
    QTabWidget* tabwidget;

    QFrame *frame;

    bool hasFTP;

    int SigBeginButt;//0表示能进入路径记录  1表示正在路径记录
//    int EmulationtoTablesig;
    QProgressDialog *progressDialog;
    MyProgressbar *myprogressbar;

};

#endif // WIDGET_H
