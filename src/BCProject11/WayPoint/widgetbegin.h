#ifndef WIDGETBEGIN_H
#define WIDGETBEGIN_H

#include <QWidget>
#include <QDebug>
#include <QErrorMessage>
#include <QMessageBox>
#include <QProgressDialog>
#include <QFileDialog>
#include <QString>
#include <QInputDialog>

#include "sensordatathread.h"
#include "autonavigation/VehicleStatus.h"

namespace Ui {
class widgetbegin;
}

class widgetbegin : public QWidget
{
    Q_OBJECT

public:
    explicit widgetbegin(QWidget *parent = 0);
    ~widgetbegin();
    void initData();
    void capture();
    void getfilename();
    int PushButtonSign;//为0表示可以开始
    sensordatathread m_sensorDataThread;
    int64_t gaussX;
    int64_t gaussY;
    int  row;
    int64_t temp_l;
    int temp_line;
    uint64_t temp_mini;
    FILE *fp;
    int sigend;
    char filename[200];

private slots:
    void on_pushButton_clicked();
    void print_globalpose_data(const autonavigation::VehicleStatus::ConstPtr &gp);
    void on_pushButton_3_clicked();

private:
    Ui::widgetbegin *ui;

    int64_t m_gaussX;
    int64_t m_gaussY;
    int64_t m_temp_l;
};

#endif // WIDGETBEGIN_H
