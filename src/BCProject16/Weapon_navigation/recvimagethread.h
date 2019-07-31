#ifndef RECVIMAGETHREAD_H
#define RECVIMAGETHREAD_H

#include <QThread>
#include <QImage>
#include <QDebug>
#include <QTime>

#include <ros/ros.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>

#include "cv_bridge/cv_bridge.h"
#include "image_transport/image_transport.h"

#include <QString>

using namespace cv;

class RecvImageThread : public QThread
{
    Q_OBJECT

public:
     RecvImageThread(QString toptic_name);
     ~RecvImageThread();

     void Image_callback(const sensor_msgs::ImageConstPtr& msg);

     QImage cvMat2QImage(const cv::Mat& mat);
     QImage Mat2QImage(const Mat& cvImg);
     int initial();
     void stop();

     ros::NodeHandle m_nodeHandle;                     //ros节点
     image_transport::Subscriber m_image_subscriber;   //图片传输订阅者

     QImage m_image;


protected:
     void run();

signals:
     void Image_data_readed(QImage image);

public:
     QString m_toptic_name;

     bool is_stop;

};

#endif // RECVIMAGETHREAD_H
