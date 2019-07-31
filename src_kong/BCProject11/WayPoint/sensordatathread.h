#ifndef SENSORDATATHREAD_H
#define SENSORDATATHREAD_H

#include <QThread>
#include <QMutexLocker>

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "cv_bridge/cv_bridge.h"
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/filesystem.hpp>

#include <ros/ros.h>
#include "autonavigation/VehicleStatus.h"
#include "autonavigation/VideoImage.h"


using namespace cv;
class sensordatathread : public QThread
{
    Q_OBJECT
public:
    sensordatathread();
    ~sensordatathread();
    void init();
    void VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &gp);

    void stop();
    bool stop_sig;
private:
    ros::Subscriber m_subscriber_VehicleStatus;
    ros::NodeHandle m_nodeHandle;
    timeval m_tv_VehicleStatus;
protected:
    virtual void run();
signals:
    void globalpose_readed(const autonavigation::VehicleStatus::ConstPtr &gp);
};

#endif // SENSORDATATHREAD_H
