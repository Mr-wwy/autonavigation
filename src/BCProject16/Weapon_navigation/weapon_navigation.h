#ifndef WEAPON_NAVIGATION_H
#define WEAPON_NAVIGATION_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QPoint>
#include <QMenu>
#include <QAction>
#include <QProcess>
#include <QStringList>
#include <QCloseEvent>
#include<QPaintEvent>
#include<QImage>
#include<QMessageBox>

#include "conhccamerathread.h"
#include"recvimagethread.h"
#include"recvjoy.h"

#define username "admin"
#define password "alv123456"
//#define password "a12345678"
#define topicname1 "VideoImage1"


namespace Ui {
class Weapon_navigation;
}

class Weapon_navigation : public QWidget
{
    Q_OBJECT

public:
    explicit Weapon_navigation(QWidget *parent = 0);
    ~Weapon_navigation();

    void init_NET_DVR();
    bool isValidIP(QString _strip);
    void readSettings();
    void writeSettings();

protected:
    void paintEvent(QPaintEvent*);
    void closeEvent(QCloseEvent *event);

public slots:
    void thread1_save_slot(int _save);
    void thread1_open_slot(int _open);
    void deal_VideoImage_data1(QImage image);
    void label1_customContextMenuRequested(QPoint pos);

    void action_camera1_open_slot();
    void action_camera1_close_slot();
    void action_camera1_save_slot(bool ischeck);

    void Joy_data(const sensor_msgs::Joy::ConstPtr &msg);

private:
    Ui::Weapon_navigation *ui;

    RecvImageThread *m_recvimagethread1;
    ConHCCameraThread *m_conhccamerathread1;
    RecvJoy m_recvjoy;

    QMenu *camera_menu1;
    QMessageBox *box;

    QAction *action_camera1_open;
    QAction *action_camera1_close;
    QAction *action_camera1_save;

    QString m_cameraIP1;

    bool m_aim;

    int g_nActScreenX;
    int g_nActScreenY;
    INT32 machine_gun;          //红色圆按钮机枪扫射
    INT32 missile;              //红色方按钮发射导弹
    qreal about_direction;      //左右方向
    qreal around_direction;     //前后方向
};

#endif // WEAPON_NAVIGATION_H
