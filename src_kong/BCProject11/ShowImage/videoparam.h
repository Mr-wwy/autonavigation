#ifndef VIDEOPARAM_H
#define VIDEOPARAM_H


#define CHANNEL1  1    //通道1
#define CHANNEL2  2    //通道2
#define CHANNEL3  3    //通道3
#define CHANNEL4  4    //通道4

struct tagVideoParam
{
    char deviceIP[64];
    char userName[64];
    char passWord[64];
    char topicName[64];

    boost::int32_t    dwStreamType;    //码流类型：0-主码流，1-子码流，2-事件类型，3-码流3，4-虚拟码流，……
    boost::int32_t    dwVideoBitrate;      /*视频码率:0-保留，1-16K(保留)，2-32K，3-48k，4-64K，5-80K，6-96K，7-128K，8-160k，9-192K，10-224K，
    11-256K，12-320K，13-384K，14-448K，15-512K，16-640K，17-768K，18-896K，19-1024K，20-1280K，21-1536K，22-1792K，23-2048K，
    24-3072K，25-4096K，26-8192K，27-16384K。最高位(31位)置成1表示是自定义码流，0～30位表示码流值，最小值16k,0xfffffffe，自动，和源一致*/
    boost::int32_t    dwVideoFrameRate;    //视频帧率 0-全部; 1-1/16; 2-1/8; 3-1/4; 4-1/2; 5-1; 6-2; 7-4; 8-6; 9-8; 10-10; 11-12; 12-16; 13-20; V2.0版本中新加14-15; 15-18; 16-22;
    //17-25；18-30；19-35；20-40；21-45；22-50；23-55；24-60；25-3;26-5;27-7;28-9;29-100; 30-120;31-24;32-48,0xfffffffe-自动，和源一致
    boost::uint8_t    byStreamType;    //0-视频流，1-复合流
    boost::uint8_t    byBitrateType;    //码率类型：0-变码率，1-定码率
    boost::uint8_t    dwLinkMode;    //0- TCP方式，1- UDP方式，2- 多播方式，3- RTP方式，4-RTP/RTSP，5-RSTP/HTTP
    boost::uint8_t    dwShowChanName;    //0-不显示通道名称,1 - 显示通道名称
    boost::uint8_t    byDispWeek;    //0 - 不显示星期，1-显示星期
    boost::uint8_t    dwShowOsd;    //0-不显示OSD，1-显示OSD


    tagVideoParam()
    {
        reset();
    }

    void reset()
    {
        memset(deviceIP, 0 , sizeof(deviceIP));
        memset(userName, 0, sizeof(userName));
        memset(passWord, 0, sizeof(passWord));
        memset(topicName, 0, sizeof(topicName));
        dwStreamType = 1;
        dwVideoBitrate=15;             //默认512k
        dwVideoFrameRate = 10;         //默认10HZ
        byStreamType = 0;
        byBitrateType = 1;
        dwLinkMode = 0;
        dwShowChanName = 0;
        byDispWeek = 0;
        dwShowOsd = 1;
    }

    void show()
    {
        printf("deviceIP: %s\n", deviceIP);
        printf("userName: %s\n", userName);
        printf("passWord: %s\n", passWord);
        printf("topicName: %s\n", topicName);
        printf("dwStreamType: %d\n", dwStreamType);
        printf("dwVideoBitrate: %d\n", dwVideoBitrate);
        printf("dwVideoFrameRate: %d\n", dwVideoFrameRate);
        printf("byStreamType: %d\n", byStreamType);
        printf("byBitrateType: %d\n", byBitrateType);
        printf("dwLinkMode: %d\n", dwLinkMode);
        printf("dwShowChanName: %d\n", dwShowChanName);
        printf("byDispWeek: %d\n", byDispWeek);
        printf("dwShowOsd: %d\n", dwShowOsd);
    }
};


#endif // VIDEOPARAM_H
