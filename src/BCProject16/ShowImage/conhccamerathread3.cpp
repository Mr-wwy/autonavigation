#include "conhccamerathread3.h"

#include "cv_bridge/cv_bridge.h"
#include <sys/time.h>

#include <QMessageBox>
#include <QDir>

LONG nPort3 = -1;
HWND hPlayWnd3 = NULL;

ConHCCameraThread3* ConHCCameraThread3::m_conHC3 = NULL;

void ConHCCameraThread3::yv12toYUV(char *outYuv, char *inYv12, int width, int height,int widthStep)
{
    int col,row;
    unsigned int Y,U,V;
    int tmp;
    int idx;

    for (row=0; row<height; row++)
    {
        idx=row * widthStep;
        for (col=0; col<width; col++)
        {
            tmp = (row/2)*(width/2)+(col/2);
            Y=(unsigned int) inYv12[row*width+col];
            U=(unsigned int) inYv12[width*height+width*height/4+tmp];
            V=(unsigned int) inYv12[width*height+tmp];
            outYuv[idx+col*3]   = Y;
            outYuv[idx+col*3+1] = U;
            outYuv[idx+col*3+2] = V;
        }
    }
}

void  CALLBACK ConHCCameraThread3::DecCBFun(int  nPort,char * pBuf,int nSize,FRAME_INFO * pFrameInfo, void* nReserved1,int nReserved2)
{
    int lFrameType = pFrameInfo->nType;

    if(lFrameType == T_YV12)
    {
//        gettimeofday(&start_time,NULL);
#if 1
        IplImage* pImgYCrCb = cvCreateImage(cvSize(pFrameInfo->nWidth,pFrameInfo->nHeight), 8, 3);
        yv12toYUV(pImgYCrCb->imageData, pBuf, pFrameInfo->nWidth,pFrameInfo->nHeight,pImgYCrCb->widthStep);
        IplImage* pImg = cvCreateImage(cvSize(pFrameInfo->nWidth,pFrameInfo->nHeight), 8, 3);
        cvCvtColor(pImgYCrCb, pImg,CV_YCrCb2RGB);

#else
        IplImage* pImg = cvCreateImage(cvSize(pFrameInfo->nWidth,pFrameInfo->nHeight), 8, 1);
        memcpy(pImg->imageData,pBuf,pFrameInfo->nWidth*pFrameInfo->nHeight);
#endif
        cv::Mat frametemp(pImg);
//        char _text[32] = {0};
//        //加系统时间
//        autonavigation::getCurrentTime(_text);
//        cv::putText(frametemp,_text,cv::Point(5, 20),cv::FONT_HERSHEY_SIMPLEX, 0.5,cv::Scalar(0,255,0,0),1);

        //cv::Mat rgb;
        //cv::cvtColor(frametemp, rgb, CV_BGR2RGB);
        //cvShowImage("IPCamera", pImg);
        //cvWaitKey(1);


        //autonavigation::VideoImagePtr pVideoImage = boost::make_shared<autonavigation::VideoImage>();

        //pVideoImage->image.height = pFrameInfo->nHeight;
        //pVideoImage->image.width = pFrameInfo->nWidth;
        //pVideoImage->image.encoding = sensor_msgs::image_encodings::TYPE_32FC1;
        //pVideoImage->image.is_bigendian = false;
        //pVideoImage->image.step = pVideoImage->image.width * 3;
        //pVideoImage->image.data.resize(pVideoImage->image.height * pVideoImage->image.step) ;
        cv_bridge::CvImagePtr cv_ptr = boost::make_shared<cv_bridge::CvImage>(std_msgs::Header(), "bgr8", frametemp);

        sensor_msgs::ImagePtr msg_ptr = cv_ptr->toImageMsg();

//        pVideoImage->image.header       = msg_ptr->header;
//        pVideoImage->image.height       = msg_ptr->height;
//        pVideoImage->image.width        = msg_ptr->width;
//        pVideoImage->image.encoding     = msg_ptr->encoding;
//        pVideoImage->image.is_bigendian = msg_ptr->is_bigendian;
//        pVideoImage->image.step         = msg_ptr->step;
//        pVideoImage->image.data.resize(pVideoImage->image.height * pVideoImage->image.step);
//        //memcpy((char*)(&pVideoImage->image.data.data[0]), (char*)(msg_ptr->image.data[0]), pVideoImage->image.height * pVideoImage->image.step);
//        pVideoImage->image.data.assign(msg_ptr->data.begin(), msg_ptr->data.end());
//        ROS_INFO("height: %d, width: %d", msg_ptr->height, msg_ptr->width);

//        m_gV->m_publisher.publish(pVideoImage);
//        std::cout<<"publish:"<<"height:"<<msg_ptr->height<<" "<<"width:"<<msg_ptr->width<<std::endl;
        m_conHC3->pub_img.publish(msg_ptr);

        cvReleaseImage(&pImgYCrCb);
        cvReleaseImage(&pImg);

//        gettimeofday(&stop_time,NULL);
//        std::cout<<"time:"<<(stop_time.tv_sec-start_time.tv_sec)*1000000+(stop_time.tv_usec-start_time.tv_usec)<<"us"<<std::endl;
    }
}


void CALLBACK ConHCCameraThread3::RealDataCallBack(LONG lRealHandle,DWORD dwDataType,BYTE *pBuffer,DWORD dwBufSize,void *pUser)
{
    //ROS_INFO("RealDataCallBack");
    DWORD dRet = 0;
    BOOL inData = FALSE;
    switch (dwDataType)
    {
        case NET_DVR_SYSHEAD:
            if (!PlayM4_GetPort(&nPort3))
            {
                break;
            }
            if (!PlayM4_OpenStream(nPort3,pBuffer,dwBufSize,1024*1024))
            {
                dRet=PlayM4_GetLastError(nPort3);
                break;
            }

            //是指解码回调函数，只解码不显示
            if (!PlayM4_SetDecCallBack(nPort3, DecCBFun))
            {
                dRet=PlayM4_GetLastError(nPort3);
                break;
            }

            //打开视频解码
            if (!PlayM4_Play(nPort3, hPlayWnd3))
            {
                dRet=PlayM4_GetLastError(nPort3);
                break;
            }
            break;
        case NET_DVR_STREAMDATA:
            inData = PlayM4_InputData(nPort3,pBuffer,dwBufSize);
            while (!inData)
            {
                usleep(200000);
                inData=PlayM4_InputData(nPort3,pBuffer,dwBufSize);
                std::cout<<"PlayM4_InputData 1"<<std::endl;
            }
            break;
        default:
            inData=PlayM4_InputData(nPort3,pBuffer,dwBufSize);
            while (!inData)
            {
                usleep(200000);
                inData=PlayM4_InputData(nPort3,pBuffer,dwBufSize);
                std::cout<<"PlayM4_InputData 2"<<std::endl;
            }
            break;
    }

}

ConHCCameraThread3::ConHCCameraThread3(const char *deviceIp, const char *userName,const char *passWord, const char *topicName,
                                     int dwStreamType, int dwVideoFrameRate , int dwVideoBitrate, HWND dwhPlayWnd)
{

    m_conHC3=this;

    m_rpsavestopflag=0;
    m_rpstartstopflag=0;

    lUserID=-1;
    lRealPlayHandle=-1;

    isstop=false;
    isopen=false;

    m_hPlayWnd=dwhPlayWnd;

    m_streamtype_son=dwStreamType;
    m_framerate_son=dwVideoFrameRate;
    m_bitrate_son=dwVideoBitrate;

    setParameter(m_streamtype_son,m_framerate_son,m_bitrate_son);

//    setStreamType(dwStreamType);
//    setVideoFrameRate(dwVideoFrameRate);
//    setVideoBitRate(dwVideoBitrate);

    setConnInfo(deviceIp,userName,passWord,topicName);
}

ConHCCameraThread3::~ConHCCameraThread3()
{
    this->stop();

    //关闭预览
    stopRealPlay();

    //注销用户
    NET_DVR_Logout(lUserID);
    //NET_DVR_Cleanup();             //使用一次就行，重复调用会出现程序异常

    //terminate();
    quit();
    wait();

}

void ConHCCameraThread3::setParameter(int32_t StreamType, int32_t VideoFrameRate, int32_t VideoBitRate)
{
    setStreamType(StreamType);
    setVideoFrameRate(VideoFrameRate);
    setVideoBitRate(VideoBitRate);

}



int ConHCCameraThread3::setConnInfo(const char* deviceIp, const char* userName, const char* passWord, const char* topicName)
{
    if (deviceIp[0] == 0)
    {
        printf("deviceIP is NULL! \n");
        return 0;
    }

    if (userName[0] == 0)
    {
        printf("userName is NULL \n");
        return 0;
    }

    if (passWord[0] == 0)
    {
        printf("passWord is NULL \n");
        return 0;
    }

    if (topicName[0] == 0)
    {
        printf("topicName is NULL \n");
        return 0;
    }


    strcpy(m_videoParam.deviceIP, deviceIp);
    strcpy(m_videoParam.userName, userName);
    strcpy(m_videoParam.passWord, passWord);
    strcpy(m_videoParam.topicName, topicName);

    image_transport::ImageTransport it(m_imagenode);     //设置图片传输节点
//    char img_topic[64]="HK_";
//    strcat(img_topic,topicName);
//    pub_img=it.advertise(img_topic,10);
    pub_img=it.advertise(m_videoParam.topicName,25);
    return 1;
}

int ConHCCameraThread3::process()
{
    printf("process begin! \n");
    ros::Rate r(10);
    while (ros::ok())
    {
        if(isstop) break;
        r.sleep();
    }

    return 1;
}

int ConHCCameraThread3::initHK()
{
//    m_videoParam.show();
    //初始化
//    NET_DVR_Init();

//    //设置连接时间与重连时间
//    NET_DVR_SetConnectTime(200, 1);    //毫秒，尝试连接次数
//    NET_DVR_SetReconnect(1000, true);    //重连间隔，毫秒；是否重连

    //注册设备
    NET_DVR_DEVICEINFO_V30 struDeviceInfo;
    lUserID = NET_DVR_Login_V30(m_videoParam.deviceIP, 8000, m_videoParam.userName, m_videoParam.passWord, &struDeviceInfo);

    if (lUserID < 0)
    {
        printf("Login error, error number %d \n", NET_DVR_GetLastError());
        //NET_DVR_Cleanup();
        return 0;
    }
    else
    {
        printf("Login success! \n");
    }

    //预览是给句柄，自动显示
    //启动预览并设置回调数据流
    //NET_DVR_PREVIEWINFO struPlayInfo = {0};
    //struPlayInfo.hPlayWnd      = NULL;    //需要SDK解码时句柄设为有效值，仅取流不解码时可设为空
    //struPlayInfo.lChannel      = 1;    //预览通道号
    //struPlayInfo.dwStreamType  = 1;    //0-主码流，1-子码流，2-码流3，3-码流4，以此类推
    //struPlayInfo.dwLinkMode    = 0;    //0- TCP方式，1- UDP方式，2- 多播方式，3- RTP方式，4-RTP/RTSP，5-RSTP/HTTP
    //struPlayInfo.byPreviewMode = 0;

    //lRealPlayHandle = NET_DVR_RealPlay_V40(lUserID, &struPlayInfo, NULL, NULL);

    //读取相机图像参数

    NET_DVR_PICCFG_V40 piccfg_v40 = {0};
    unsigned int nsize = 0;
    int _ret = NET_DVR_GetDVRConfig(lUserID, NET_DVR_GET_PICCFG_V40, CHANNEL1, &piccfg_v40, sizeof(piccfg_v40), &nsize);

    //设置相机图像参数
    piccfg_v40.dwShowChanName  = m_videoParam.dwShowChanName;    //不显示通道名称
    piccfg_v40.byDispWeek = m_videoParam.byDispWeek;    //不显示星期
    piccfg_v40.dwShowOsd  = m_videoParam.dwShowOsd;    //不显示OSD

    if(m_videoParam.dwShowOsd)
    {
        piccfg_v40.byOSDType=0x00;
        piccfg_v40.byFontSize=0xff;
        piccfg_v40.byOSDColorType=0x01;
        piccfg_v40.byOSDMilliSecondEnable=0x01;

        piccfg_v40.struOsdColor.byRed=0x00;
        piccfg_v40.struOsdColor.byGreen=0xff;
        piccfg_v40.struOsdColor.byBlue=0x00;
    }

    _ret = NET_DVR_SetDVRConfig(lUserID, NET_DVR_SET_PICCFG_V40, CHANNEL1, &piccfg_v40, sizeof(piccfg_v40));

    //获取相机压缩参数
    NET_DVR_COMPRESSIONCFG_V30 compressioncfg_v30 = {0};
    _ret = NET_DVR_GetDVRConfig(lUserID, NET_DVR_GET_COMPRESSCFG_V30, CHANNEL1, &compressioncfg_v30, sizeof(compressioncfg_v30), &nsize);

    //设置相机压缩参数
    compressioncfg_v30.struNetPara.byStreamType     = m_videoParam.byStreamType;    //0-视频流，1-复合流
    compressioncfg_v30.struNetPara.byBitrateType    = m_videoParam.byBitrateType;    //码率类型：0-变码率，1-定码率
    compressioncfg_v30.struNetPara.dwVideoFrameRate = m_videoParam.dwVideoFrameRate;   //视频帧率
    compressioncfg_v30.struNetPara.dwVideoBitrate= m_videoParam.dwVideoBitrate;     //视频码率
    _ret = NET_DVR_SetDVRConfig(lUserID, NET_DVR_SET_COMPRESSCFG_V30, CHANNEL1, &compressioncfg_v30, sizeof(compressioncfg_v30));

//    printf("struNetPara.byStreamType: 0x%x \n", compressioncfg_v30.struNetPara.byStreamType );
//    printf("struNetPara.byBitrateType: 0x%x \n", compressioncfg_v30.struNetPara.byBitrateType );
//    printf("struNetPara.dwVideoBitRate : %d \n", compressioncfg_v30.struNetPara.dwVideoBitrate );
//    printf("struNetPara.dwVideoFrameRate : %d \n", compressioncfg_v30.struNetPara.dwVideoFrameRate );

    startRealPlay();
//    //设置回调数据流
//    NET_DVR_CLIENTINFO ClientInfo = {0};
//    ClientInfo.lChannel = CHANNEL1;
//    ClientInfo.hPlayWnd = NULL;
//    //ClientInfo.lLinkMode = 0x80000001; //最高位(31)为0表示主码流，为1表示子码流；0～30位表示连接方式：0－TCP方式，1－UDP方式，2－多播方式
//    ClientInfo.sMultiCastIP = NULL;

//    ClientInfo.lLinkMode = m_videoParam.dwLinkMode;

//    if (m_videoParam.dwStreamType != 0)    //子码流
//    {
//        ClientInfo.lLinkMode = ClientInfo.lLinkMode | 0x80000000;
//    }
//    printf("LinkMode 0x%02x \n", ClientInfo.lLinkMode);
//    //CallBackFunction callBack1 = boost::bind(&VideoImageInput::bRealDataCallBack, this, _1, _2, _3, _4, _5);
//    lRealPlayHandle = NET_DVR_RealPlay_V30(lUserID, &ClientInfo, RealDataCallBack, NULL, 0);

//    if (lRealPlayHandle < 0)
//    {
//        printf("NET_DVR_RealPlay_V30 error! error number %d \n", NET_DVR_GetLastError());
//        NET_DVR_Logout(lUserID);
//        //NET_DVR_Cleanup();
//        return 0;
//    }
//    else
//    {
//        printf("Play \n");
//    }

//    memset(&compressioncfg_v30, 0, sizeof(compressioncfg_v30));
//    _ret = NET_DVR_GetDVRConfig(lUserID, NET_DVR_GET_COMPRESSCFG_V30, CHANNEL1, &compressioncfg_v30, sizeof(compressioncfg_v30), &nsize);
//    printf("NET_DVR_GET_COMPRESSCFG_V30 %d %d %d %d %d  %d %d %d %d %d  %d %d %d %d %d  %d %d %d %d %d \n",
//           compressioncfg_v30.struNetPara.byStreamType,
//           compressioncfg_v30.struNetPara.byResolution,
//           compressioncfg_v30.struNetPara.byBitrateType,
//           compressioncfg_v30.struNetPara.byPicQuality,
//           compressioncfg_v30.struNetPara.dwVideoBitrate,
//           compressioncfg_v30.struNetPara.dwVideoFrameRate,
//           compressioncfg_v30.struNetPara.wIntervalFrameI,
//           compressioncfg_v30.struNetPara.byIntervalBPFrame,
//           compressioncfg_v30.struNetPara.byres1,
//           compressioncfg_v30.struNetPara.byVideoEncType,
//           compressioncfg_v30.struNetPara.byAudioEncType,
//           compressioncfg_v30.struNetPara.byVideoEncComplexity,
//           compressioncfg_v30.struNetPara.byEnableSvc,
//           compressioncfg_v30.struNetPara.byFormatType,
//           compressioncfg_v30.struNetPara.byAudioBitRate,
//           compressioncfg_v30.struNetPara.byStreamSmooth,
//           compressioncfg_v30.struNetPara.byAudioSamplingRate,
//           compressioncfg_v30.struNetPara.bySmartCodec,
//           compressioncfg_v30.struNetPara.byres,
//           compressioncfg_v30.struNetPara.wAverageVideoBitrate);
    return 1;
}


//void VideoImageInput::setLinkMode(boost::uint8_t c)
//{
//    m_videoParam.dwLinkMode = c;
//}

void ConHCCameraThread3::setStreamType(boost::int32_t c)
{
    m_videoParam.dwStreamType = c;
}

void ConHCCameraThread3::setVideoFrameRate(boost::int32_t c)
{
    m_videoParam.dwVideoFrameRate = c;
}

void ConHCCameraThread3::setVideoBitRate(boost::int32_t c)
{
    m_videoParam.dwVideoBitrate=c;
}

int ConHCCameraThread3::connectHK()
{
//    ros::Rate r(1);
//    while (ros::ok())
//    {
//        printf("try to connect camera ... \n");
//        if(isstop) break;
//        if (initHK())
//        {
//            break;
//        }
//        r.sleep();
//    }
//    printf("connectHK success! \n");

//    emit openCameraSignals(1);
    if(initHK())
    {
        emit openCameraSignals(1);
        isopen=true;
        return 1;
    }
    else
    {
        emit openCameraSignals(0);
        isopen=false;
        return 0;
    }

}

int ConHCCameraThread3::resetHKandconnectHK(int Stream_Type)
{
    if(Stream_Type==0)         //主码流
    {
        setParameter(0,13,23);

    }
    else if(Stream_Type==1)                      //子码流
    {
        setParameter(m_streamtype_son,m_framerate_son,m_bitrate_son);
    }

    if(isopen)
    {
        if(m_rpstartstopflag==0)
        {
            //关闭预览
            stopRealPlay();
            //注销用户
            //NET_DVR_Logout(lUserID);     //不需要注销用户，只需要改变取流方式即可

            //数值初始化
            m_rpsavestopflag=0;
            m_rpstartstopflag=0;
            //lUserID=-1;
            lRealPlayHandle=-1;
            isstop=false;

//            if (initHK())
//            {
//                return 1;
//            }
//            else
//            {
//                return 0;
//            }
        }
        else if(m_rpstartstopflag==1)
        {
            //关闭预览
            stopRealPlay();

            usleep(200000);

            //注销用户
            //NET_DVR_Logout(lUserID);      //不需要注销用户，只需要改变取流方式即可

            //数值初始化
            m_rpsavestopflag=0;
            m_rpstartstopflag=0;
            //lUserID=-1;
            lRealPlayHandle=-1;
            isstop=false;

//            if (initHK())
//            {
//                return 1;
//            }
//            else
//            {
//                return 0;
//            }
            startRealPlay();
        }
    }

}



void ConHCCameraThread3::run()
{
    //initHK();     //由于connectHK()中已调用initHK(),在这使用initHK()两次初始化与配置后会错误(error happend)
    connectHK();
    process();

}

void ConHCCameraThread3::stop()
{
    isstop=true;

}


void ConHCCameraThread3::startRealPlay()
{
    if(m_rpstartstopflag==0)
    {
        //设置回调数据流
        NET_DVR_CLIENTINFO ClientInfo = {0};
        ClientInfo.lChannel = CHANNEL1;
        ClientInfo.hPlayWnd = m_hPlayWnd;
        //ClientInfo.lLinkMode = 0x80000001; //最高位(31)为0表示主码流，为1表示子码流；0～30位表示连接方式：0－TCP方式，1－UDP方式，2－多播方式
        ClientInfo.sMultiCastIP = NULL;

        ClientInfo.lLinkMode = m_videoParam.dwLinkMode;

        if (m_videoParam.dwStreamType != 0)    //子码流
        {
            ClientInfo.lLinkMode = ClientInfo.lLinkMode | 0x80000000;
        }
        printf("LinkMode 0x%02x \n", ClientInfo.lLinkMode);
        //CallBackFunction callBack1 = boost::bind(&VideoImageInput::bRealDataCallBack, this, _1, _2, _3, _4, _5);
//        lRealPlayHandle = NET_DVR_RealPlay_V30(lUserID, &ClientInfo, RealDataCallBack, NULL, 0);
        lRealPlayHandle = NET_DVR_RealPlay_V30(lUserID, &ClientInfo, NULL, NULL, 0);

        if (lRealPlayHandle < 0)
        {
            printf("NET_DVR_RealPlay_V30 error! error number %d \n", NET_DVR_GetLastError());
            NET_DVR_Logout(lUserID);
            //NET_DVR_Cleanup();
            emit openCameraSignals(0);
            return ;
        }
        else
        {
            m_rpstartstopflag=1;
            emit openCameraSignals(1);
            printf("Play \n");
        }

    }

}

void ConHCCameraThread3::stopRealPlay()
{
    if(m_rpstartstopflag==1)
    {
        if (m_rpsavestopflag == 1)
        {
            saveorstopRealPlay();
        }

        int _ret=NET_DVR_StopRealPlay(lRealPlayHandle);
        lRealPlayHandle=-1;
        m_rpstartstopflag=0;
    }

}

void ConHCCameraThread3::saveorstopRealPlay()
{
    if (m_rpstartstopflag == 0)
    {
        QMessageBox::information(0,tr("have no realplay yet"),
            tr("Please Play Video First!"));
        return;
    }

    //当前处于停止录像阶段，就开启录像功能功能
    if (m_rpsavestopflag == 0)
    {
        //SAVE_REALDATA_FILEPATH
        QDir directory("");
        QString filepath("./");
        QString currDate;
        QString currTime;
        currDate = QDateTime::currentDateTime().toString("yyyy-MM-dd");
        currTime = QDateTime::currentDateTime().toString("hh_mm_ss");

        filepath.append(currDate);
        filepath.append("/");
        directory.mkpath(filepath);
        filepath.append(currTime);
        filepath.append(".mp4");

        if (!NET_DVR_SaveRealData(lRealPlayHandle, filepath.toLatin1().data()))
        {
            QMessageBox::information(0,tr("NET_DVR_SaveRealData Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        }
        else
        {
            m_rpsavestopflag =1;

        }

    }
    else
    {
        if (!NET_DVR_StopSaveRealData(lRealPlayHandle))
        {
            QMessageBox::information(0,tr("NET_DVR_StopSaveRealData Error"),
                tr("SDK_LASTERROR=%1").arg(NET_DVR_GetLastError()));
        }
        else
        {
            m_rpsavestopflag = 0;
        }

    }

    emit saveSignals(m_rpsavestopflag);
}
