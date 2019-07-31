#ifndef RECVIMAGETHREAD_H
#define RECVIMAGETHREAD_H



#include <QThread>
#include <QImage>
#include <QPixmap>
#include <QDebug>

#include <ros/ros.h>

#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>
#include "cv_bridge/cv_bridge.h"
#include "image_transport/image_transport.h"

using namespace cv;
class RecvImageThread : public QThread
{
     Q_OBJECT
public:
    RecvImageThread();
    ~RecvImageThread();

    void Image_callback(const sensor_msgs::ImageConstPtr& msg);

    QImage cvMat2QImage(const cv::Mat& mat);
    int init();

    ros::NodeHandle m_nodeHandle_image;
    image_transport::Subscriber m_subscriber_image;

    QImage image;

protected:
    void run();

signals:
    void VideoImage_readed(QImage image);

};

#endif // RECVIMAGETHREAD_H
