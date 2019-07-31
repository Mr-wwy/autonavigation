#include "recvimagethread.h"

RecvImageThread::RecvImageThread(QString toptic_name)
{
    is_stop=false;
    m_toptic_name=toptic_name;

    initial();
}

RecvImageThread::~RecvImageThread()
{
    terminate();
    quit();
    wait();

}

int RecvImageThread::initial()
{
    if(m_toptic_name.isEmpty())
        return 0;
   // m_toptic_name.toStdString();//将QString类转化为string类（string类相当于QString&类）
    image_transport::ImageTransport it(m_nodeHandle);        //图片传输节点
    m_image_subscriber=it.subscribe(m_toptic_name.toStdString(),25,&RecvImageThread::Image_callback,this);

}

void RecvImageThread::run()
{

//    ROS_INFO("RevMsgThread start");
//     ros::spin();

     ros::MultiThreadedSpinner spinner(1); // Use 4 threads
     spinner.spin(); // spin() will not return until the node has been shutdown

//    ros::Rate r(50);//ros::Rate 设置频率
//    while(ros::ok())
//    {
//        //判断是否超时
//        if(is_stop)
//            break;

//         r.sleep();

//         ros::spinOnce();//触发回调函数
//    }

}

void RecvImageThread::stop()
{
    is_stop=true;
}


void RecvImageThread::Image_callback(const sensor_msgs::ImageConstPtr &msg)
{
//    ROS_INFO("callBack!");
    cv_bridge::CvImagePtr cv_ptr = boost::make_shared<cv_bridge::CvImage>(std_msgs::Header(), "bgr8");

    try
    {
      cv_ptr = cv_bridge::toCvCopy(msg,sensor_msgs::image_encodings::BGR8);
    }
    catch (cv_bridge::Exception& e)
    {
//      ROS_ERROR("cv_bridge exception:%s",e.what());
      return;
    }

    Mat img_rgb = cv_ptr->image;

    Mat img_gray;

    cvtColor(img_rgb,img_gray,CV_BGR2RGB);

    m_image=cvMat2QImage(img_rgb);//将图像格式从Mat转化为QImage
    emit Image_data_readed(m_image);

}


/******************将图像格式从Mat转化为QImage*********************/
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
            return image.rgbSwapped();//转换RGB，否则红蓝颜色互换
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


/*************将Mat转换为QImage***************/
QImage RecvImageThread::Mat2QImage(const Mat& cvImg)
{
    QImage qImg;
    if(cvImg.channels()==3)                             //3 channels color image
    {
        cv::cvtColor(cvImg,cvImg,CV_BGR2RGB);
        qImg =QImage((const unsigned char*)(cvImg.data),
                    cvImg.cols, cvImg.rows,
                    cvImg.cols*cvImg.channels(),
                    QImage::Format_RGB888);
    }
    else if(cvImg.channels()==1)                    //grayscale image
    {
        qImg =QImage((const unsigned char*)(cvImg.data),
                    cvImg.cols,cvImg.rows,
                    cvImg.cols*cvImg.channels(),
                    QImage::Format_Indexed8);
    }
    else
    {
        qImg =QImage((const unsigned char*)(cvImg.data),
                    cvImg.cols,cvImg.rows,
                    cvImg.cols*cvImg.channels(),
                    QImage::Format_RGB888);
    }

    return qImg;
}



