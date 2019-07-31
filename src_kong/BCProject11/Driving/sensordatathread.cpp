#include "sensordatathread.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"


SensordataThread::SensordataThread()
{
    gettimeofday(&m_tv_VehicleStatus, NULL);

    init();
}

SensordataThread::~SensordataThread()
{

    terminate();                            //SensorDataThread必须用terninate()函数终止，因为它含有多个回调函数
    quit();
    wait();

}

int SensordataThread::init()
{    
    m_subscriber_VehicleStatus = m_nodeHandle_vs.subscribe(VEHICLESTATUS, 10, &SensordataThread::VehicleStatus_callback, this);
//    m_subscriber_logitech = m_nodeHandle_lg.subscribe(LOGITECH, 10, &SensordataThread::Logitech_callback, this);
//    m_subscriber_ping=m_nodeHandle_ping.subscribe("ping",10,&SensordataThread::Ping_callback,this);

//    image_transport::ImageTransport it(m_nodeHandle_image);        //图片传输节点
//    m_subscriber_image=it.subscribe(VIDEOIMAGE1,10,&SensordataThread::Image_callback,this);
}

/*
ros::spin() 在调用后不会再返回，也就是你的主程序到这儿就不往下执行了，而 ros::spinOnce() 后者在调用后还可以继续执行之后的程序。
其实看函数名也能理解个差不多，一个是一直调用；另一个是只调用一次，如果还想再调用，就需要加上循环了。
* ros::spin() 将会进入循环， 一直调用回调函数Callback(),每次调用10个数据。
* 当用户输入Ctrl+C或者ROS主进程关闭时退出，
*/

void SensordataThread::run()
{
//    ros::spin();
    ros::MultiThreadedSpinner spinner(4); // Use 4 threads
    spinner.spin(); // spin() will not return until the node has been shutdown

    /*
    ros::Rate r(10);
    while(ros::ok())
    {
        ros::spinOnce();
        r.sleep();
    }
    */

}

void SensordataThread::VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &gp)
{
    //ROS_INFO("VehicleStatus_callback start");
    gettimeofday(&m_tv_VehicleStatus, NULL);
    emit VehicleStatus_readed(gp);
}


//void SensordataThread::Image_callback(const sensor_msgs::ImageConstPtr &msg)
//{
//    //ROS_INFO(" VideoImage_callBack start");
//    cv_bridge::CvImagePtr cv_ptr = boost::make_shared<cv_bridge::CvImage>(std_msgs::Header(), "bgr8");

//    try
//    {
//      cv_ptr = cv_bridge::toCvCopy(msg,sensor_msgs::image_encodings::BGR8);
//    }
//    catch (cv_bridge::Exception& e)
//    {
//      ROS_ERROR("cv_bridge exception:%s",e.what());
//      return;
//    }

//    Mat img_rgb = cv_ptr->image;

//    Mat img_gray;

//    cvtColor(img_rgb,img_gray,CV_BGR2RGB);

//    image=cvMat2QImage(img_rgb);
//    emit VideoImage_readed(image);

//}

//void SensordataThread::Logitech_callback(const autonavigation::Logitech::ConstPtr &lg)
//{
//   // ROS_INFO("Logitech_callback start");
//    emit Logitech_readed(lg);
//}

//void SensordataThread::Ping_callback(const autonavigation::Ping::ConstPtr &ping)
//{
//    emit Ping_readed(ping);
//}

//QImage SensordataThread::cvMat2QImage(const Mat &mat)
//{
//        if(mat.type() == CV_8UC1)
//        {
//            QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
//            image.setColorCount(256);
//            for(int i = 0; i < 256; i++)
//            {
//                image.setColor(i, qRgb(i, i, i));
//            }
//            uchar *pSrc = mat.data;
//            for(int row = 0; row < mat.rows; row ++)
//            {
//                uchar *pDest = image.scanLine(row);
//                memcpy(pDest, pSrc, mat.cols);
//                pSrc += mat.step;
//            }
//            return image;
//        }
//        else if(mat.type() == CV_8UC3)
//        {
//            const uchar *pSrc = (const uchar*)mat.data;
//            QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
//            return image.rgbSwapped();
//        }
//        else if(mat.type() == CV_8UC4){
////            qDebug() << "CV_8UC4";
//            const uchar *pSrc = (const uchar*)mat.data;
//            QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
//            return image.copy();
//        }

//        else
//        {
////            qDebug() << "ERROR: Mat could not be converted to QImage.";
//            return QImage();
//        }
//}
