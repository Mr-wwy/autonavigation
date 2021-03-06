#ifndef CONHCCAMERATHREAD4_H
#define CONHCCAMERATHREAD4_H



#include <QThread>
#include <QDebug>
#include <QTime>
#include <QString>

#include <ros/ros.h>
#include "image_transport/image_transport.h"
#include <boost/bind.hpp>
#include <boost/function.hpp>

#include "CommonFunc.h"
#include "CommonMsg.h"
#include "autonavigation/VideoImage.h"
#include "videoparam.h"

#include "HCNetSDK.h"
#include "PlayM4.h"

#include <opencv2/opencv.hpp>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>


using namespace cv;

class ConHCCameraThread4 : public QThread
{
    Q_OBJECT

public:

    typedef boost::function<void (LONG lRealHandle,DWORD dwDataType,BYTE *pBuffer,DWORD dwBufSize,void *pUser)> CallBackFunction;

    ConHCCameraThread4(const char* deviceIp, const char* userName, const char* passWord, const char* topicName,
                      int dwStreamType, int dwVideoFrameRate , int dwVideoBitrate, HWND dwhPlayWnd4);
    ~ConHCCameraThread4();

    int initHK();

    int connectHK();

    int resetHKandconnectHK(int Stream_Type);

    int setConnInfo(const char* deviceIp, const char* userName, const char* passWord, const char* topicName);

    //void setLinkMode(boost::uint8_t c);
    void setStreamType(boost::int32_t c);
    void setVideoFrameRate(boost::int32_t c);
    void setVideoBitRate(boost::int32_t c);

    int process();

    //实时流回调
    //friend void CALLBACK RealDataCallBack(LONG lRealHandle,DWORD dwDataType,BYTE *pBuffer,DWORD dwBufSize,void *pUser);

    //解码回调 视频为YUV数据(YV12)，音频为PCM数据
    //friend void CALLBACK DecCBFun(LONG nPort,char * pBuf,LONG nSize,FRAME_INFO * pFrameInfo, LONG nReserved1,LONG nReserved2);

    //实时流回调
    static void CALLBACK RealDataCallBack(LONG lRealHandle,DWORD dwDataType,BYTE *pBuffer,DWORD dwBufSize,void *pUser);

    //解码回调 视频为YUV数据(YV12)，音频为PCM数据
    //static void CALLBACK DecCBFun(LONG nPort,char * pBuf,LONG nSize,FRAME_INFO * pFrameInfo, LONG nReserved1,LONG nReserved2);
    static void CALLBACK DecCBFun(int  nPort,char * pBuf,int nSize,FRAME_INFO * pFrameInfo, void* nReserved1,int nReserved2);

    static void yv12toYUV(char *outYuv, char *inYv12, int width, int height,int widthStep);

    void stop();

    void startRealPlay();
    void stopRealPlay();

    void saveorstopRealPlay();

    void setParameter(boost::int32_t StreamType, boost::int32_t VideoFrameRate,boost::int32_t VideoBitRate);

protected:
    void run();

signals:
    void saveSignals(int _save);

    void openCameraSignals(int _open);

private:
    ros::NodeHandle m_imagenode;              //图片ros节点

    image_transport::Publisher pub_img;       //设置图片的发布者

    LONG lUserID;

    LONG lRealPlayHandle;

    tagVideoParam m_videoParam;

    //cv::VideoWriter w_cap;

    int m_rpstartstopflag;

    int m_rpsavestopflag;

    bool isstop;

    bool isopen;

    INT32 m_streamtype_son;
    INT32 m_framerate_son;
    INT32 m_bitrate_son;

    HWND m_hPlayWnd;

public:
   static ConHCCameraThread4 *m_conHC4;

};

#endif // CONHCCAMERATHREAD4_H
