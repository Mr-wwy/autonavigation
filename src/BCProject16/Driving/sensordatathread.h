#ifndef DRIVING_SENSORDATATHREAD_H_
#define DRIVING_SENSORDATATHREAD_H_


#include <QThread>
#include <QImage>
#include <QPixmap>
#include <QDebug>

#include <ros/ros.h>
#include "autonavigation/VehicleStatus.h"
#include "autonavigation/Logitech.h"
#include <autonavigation/Ping.h>

#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>
#include "cv_bridge/cv_bridge.h"
#include "image_transport/image_transport.h"

using namespace cv;
class SensordataThread : public QThread
{
     Q_OBJECT
public:
    SensordataThread();
    ~SensordataThread();

    void VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &gp);
//    void Logitech_callback(const autonavigation::Logitech::ConstPtr &lg);
//    void Ping_callback(const autonavigation::Ping::ConstPtr &ping);
//    void Image_callback(const sensor_msgs::ImageConstPtr& msg);

//    QImage cvMat2QImage(const cv::Mat& mat);
    int init();    

    ros::Subscriber m_subscriber_VehicleStatus;
//    ros::Subscriber m_subscriber_logitech;
//    ros::Subscriber m_subscriber_ping;
    ros::NodeHandle m_nodeHandle_vs;
//    ros::NodeHandle m_nodeHandle_lg;
//    ros::NodeHandle m_nodeHandle_ping;

//    ros::NodeHandle m_nodeHandle_image;
//    image_transport::Subscriber m_subscriber_image;

//    QImage image;

protected:
    void run();

signals:
    void VehicleStatus_readed(const autonavigation::VehicleStatus::ConstPtr &gp);
//    void VideoImage_readed(QImage image);
//    void Logitech_readed(const autonavigation::Logitech::ConstPtr &lg);
//    void Ping_readed(const autonavigation::Ping::ConstPtr &ping);
private:
    FILE *m_fp;

    QString m_filepath;

    bool isfirst;
    bool isfirst_data;

    timeval temp_time;
    timeval current_time;

};

#endif // DRIVING_SENSORDATATHREAD_H_





















