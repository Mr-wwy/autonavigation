#include "recvimagethread.h"

#include "CommonDefinition.h"
#include "CommonSensor.h"
#include "CommonMsg.h"

RecvImageThread::RecvImageThread()
{
    init();

}

RecvImageThread::~RecvImageThread()
{
    terminate();                            //须用terninate()函数终止，因为它含有回调函数
    quit();
    wait();
}

int RecvImageThread::init()
{
    image_transport::ImageTransport it(m_nodeHandle_image);        //图片传输节点
    m_subscriber_image=it.subscribe(VIDEOIMAGE1,10,&RecvImageThread::Image_callback,this);
}

void RecvImageThread::run()
{
    //     ros::spin();
    ros::MultiThreadedSpinner spinner(5); // Use 5 threads
    spinner.spin(); // spin() will not return until the node has been shutdown

}

void RecvImageThread::Image_callback(const sensor_msgs::ImageConstPtr &msg)
{
    //ROS_INFO(" VideoImage_callBack start");
    cv_bridge::CvImagePtr cv_ptr = boost::make_shared<cv_bridge::CvImage>(std_msgs::Header(), "bgr8");

    try
    {
      cv_ptr = cv_bridge::toCvCopy(msg,sensor_msgs::image_encodings::BGR8);
    }
    catch (cv_bridge::Exception& e)
    {
      ROS_ERROR("cv_bridge exception:%s",e.what());
      return;
    }

    Mat img_rgb = cv_ptr->image;

    Mat img_gray;
    cvtColor(img_rgb,img_gray,CV_BGR2RGB);

    image=cvMat2QImage(img_rgb);
    emit VideoImage_readed(image);

}

QImage RecvImageThread::cvMat2QImage(const Mat &mat)
{
    if(mat.type() == CV_8UC1)
    {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        image.setColorCount(256);
        for(int i = 0; i < 256; i++)
        {
            image.setColor(i, qRgb(i, i, i));
        }
        uchar *pSrc = mat.data;
        for(int row = 0; row < mat.rows; row ++)
        {
            uchar *pDest = image.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
    else if(mat.type() == CV_8UC3)
    {
        const uchar *pSrc = (const uchar*)mat.data;
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else if(mat.type() == CV_8UC4){
//            qDebug() << "CV_8UC4";
        const uchar *pSrc = (const uchar*)mat.data;
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
        return image.copy();
    }

    else
    {
//            qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }

}




