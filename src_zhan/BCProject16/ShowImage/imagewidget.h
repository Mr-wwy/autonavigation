#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QPoint>
#include <QMenu>
#include <QAction>
#include <QProcess>
#include <QStringList>
#include <QCloseEvent>

#include "recvimagethread.h"
#include "conhccamerathread.h"
#include "conhccamerathread2.h"
#include "conhccamerathread3.h"
#include "conhccamerathread4.h"

#include "cframeplaywnd.h"

//#define deviceIp1 "192.168.1.61"
//#define deviceIp2 "192.168.1.62"
//#define deviceIp3 "192.168.1.63"
//#define deviceIp4 "192.168.1.64"
#define username "admin"
#define password "alv123456"
#define topicname1 "VideoImage1"
#define topicname2 "VideoImage2"
#define topicname3 "VideoImage3"
#define topicname4 "VideoImage4"

namespace Ui {
class ImageWidget;
}

class ImageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageWidget(QWidget *parent = 0);
    ~ImageWidget();

    void init_NET_DVR();
    bool isValidIP(QString _strip);
    void readSettings();
    void writeSettings();

protected:
    void mouseDoubleClickEvent(QMouseEvent *e);

protected:
    void resizeEvent(QResizeEvent* event);

    void closeEvent(QCloseEvent *event);

signals:


public slots:
    //接受的数据
//    void deal_VideoImage_data1(QImage image);
//    void deal_VideoImage_data2(QImage image);
//    void deal_VideoImage_data3(QImage image);
//    void deal_VideoImage_data4(QImage image);

    void DoubleClick_slot1();
    void DoubleClick_slot2();
    void DoubleClick_slot3();
    void DoubleClick_slot4();

    void thread1_save_slot(int _save);
    void thread2_save_slot(int _save);
    void thread3_save_slot(int _save);
    void thread4_save_slot(int _save);

    void thread1_open_slot(int _open);
    void thread2_open_slot(int _open);
    void thread3_open_slot(int _open);
    void thread4_open_slot(int _open);

    void label1_customContextMenuRequested(QPoint pos);
    void label2_customContextMenuRequested(QPoint pos);
    void label3_customContextMenuRequested(QPoint pos);
    void label4_customContextMenuRequested(QPoint pos);

    void action_camera1_open_slot();
    void action_camera1_close_slot();
    void action_camera1_save_slot(bool ischeck);

    void action_camera2_open_slot();
    void action_camera2_close_slot();
    void action_camera2_save_slot(bool ischeck);

    void action_camera3_open_slot();
    void action_camera3_close_slot();
    void action_camera3_save_slot(bool ischeck);

    void action_camera4_open_slot();
    void action_camera4_close_slot();
    void action_camera4_save_slot(bool ischeck);

private:
    Ui::ImageWidget *ui;

//    RecvImageThread *m_recvimagethread1;

//    RecvImageThread *m_recvimagethread2;

//    RecvImageThread *m_recvimagethread3;

//    RecvImageThread *m_recvimagethread4;

    ConHCCameraThread *m_conhccamerathread1;
    ConHCCameraThread2 *m_conhccamerathread2;
    ConHCCameraThread3 *m_conhccamerathread3;
    ConHCCameraThread4 *m_conhccamerathread4;

    CFramePlayWnd *label_camera1;
    CFramePlayWnd *label_camera2;
    CFramePlayWnd *label_camera3;
    CFramePlayWnd *label_camera4;

    int fullscreen_ID;

    QMenu *camera_menu1;
    QMenu *camera_menu2;
    QMenu *camera_menu3;
    QMenu *camera_menu4;

    QAction *action_camera1_open;
    QAction *action_camera1_close;
    QAction *action_camera1_save;

    QAction *action_camera2_open;
    QAction *action_camera2_close;
    QAction *action_camera2_save;

    QAction *action_camera3_open;
    QAction *action_camera3_close;
    QAction *action_camera3_save;

    QAction *action_camera4_open;
    QAction *action_camera4_close;
    QAction *action_camera4_save;

    QString m_cameraIP1;
    QString m_cameraIP2;
    QString m_cameraIP3;
    QString m_cameraIP4;

    bool m_isloginin_1;
    bool m_isloginin_2;
    bool m_isloginin_3;
    bool m_isloginin_4;
};

#endif // IMAGEWIDGET_H
