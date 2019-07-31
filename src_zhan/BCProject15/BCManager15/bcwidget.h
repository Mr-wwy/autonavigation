#ifndef BCWIDGET_H
#define BCWIDGET_H

#include <QWidget>
#include <QProcess>

namespace Ui {
class BCWidget;
}

class BCWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BCWidget(QWidget *parent = 0);
    ~BCWidget();

    void show_error(QString str,QProcess::ProcessError error);

public slots:
    //void cameraprocess_finished(int,QProcess::ExitStatus);
    void cameraprocess_error(QProcess::ProcessError);

    //void drivingprocess_finished(int,QProcess::ExitStatus);
    void drivingprocess_error(QProcess::ProcessError);

    //void pointprocess_finished(int,QProcess::ExitStatus);
    void pointprocess_error(QProcess::ProcessError);

    //void rqtbagprocess_finished(int,QProcess::ExitStatus);
    void rqtbagprocess_error(QProcess::ProcessError);

    //void udpsenderprocess_finished(int,QProcess::ExitStatus);
    void udpsenderprocess_error(QProcess::ProcessError);

private slots:
    void on_DrivingBtn_clicked();

    void on_CameraBtn_clicked();

    void on_PointBtn_clicked();

    void on_RqtBagBtn_clicked();

    void on_CenterBtn_clicked();

    void on_ExitBtn_clicked();

private:
    Ui::BCWidget *ui;

    QProcess *m_cameraprocess;

    QProcess *m_drivingprocess;

    QProcess *m_pointprocess;

    QProcess *m_rqtbagprocess;

    QProcess *m_udpsenderprocess;

    QString userhome;

};

#endif // BCWIDGET_H
























































