#ifndef _HC_NET_SDK_H_
#define _HC_NET_SDK_H_


#ifndef __PLAYRECT_defined
#define __PLAYRECT_defined
typedef struct __PLAYRECT
{
    int x;
    int y;
    int uWidth;
    int uHeight;
}PLAYRECT;
#endif

#if (defined(_WIN32)) //windows
#define NET_DVR_API  extern "C"__declspec(dllimport)
typedef  unsigned __int64 UINT64;
#elif defined(__linux__) || defined(__APPLE__) //linux
typedef     unsigned int    DWORD;
typedef     unsigned short  WORD;
typedef     unsigned short  USHORT;
typedef     int             LONG;
typedef  	unsigned char	BYTE ;
#define     BOOL int
typedef     unsigned int   	UINT;
typedef 	void* 			LPVOID;
typedef 	void* 			HANDLE;
typedef     unsigned int*  LPDWORD;
typedef  unsigned long long UINT64;

#ifndef    TRUE
#define    TRUE	1
#endif
#ifndef    FALSE
#define	   FALSE 0
#endif
#ifndef    NULL
#define	   NULL 0
#endif

#define __stdcall
#define CALLBACK

#define NET_DVR_API extern "C"
typedef unsigned int   COLORKEY;
typedef unsigned int   COLORREF;

#ifndef __HWND_defined
#define __HWND_defined
        #if defined(__linux__)
                typedef unsigned long HWND;
        #else
                typedef void* HWND;
        #endif
#endif

#define NET_DVR_API extern "C"
typedef unsigned int   COLORKEY;
typedef unsigned int   COLORREF;

#ifndef __HDC_defined
#define __HDC_defined
    #if defined(__linux__)
    typedef struct __DC
    {
            void*   surface;        //SDL Surface
            HWND    hWnd;           // HDC window handle
    }DC;
    typedef DC* HDC;
    #else
    typedef void* HDC;
    #endif
#endif

typedef struct tagInitInfo
{
        int uWidth;
        int uHeight;
}INITINFO;
#endif

//宏定义
#define MAX_NAMELEN			    16		//DVR本地登陆名
#define MAX_RIGHT			    32		//设备支持的权限（1-12表示本地权限，13-32表示远程权限）
#define NAME_LEN			    32      //用户名长度
#define PASSWD_LEN			    16      //密码长度
#define GUID_LEN				16      //GUID长度
#define DEV_TYPE_NAME_LEN		24      //设备类型名称长度
#define SERIALNO_LEN		    48      //序列号长度
#define MACADDR_LEN			    6       //mac地址长度
#define MAX_ETHERNET		    2       //设备可配以太网络
#define MAX_NETWORK_CARD        4       //设备可配最大网卡数目
#define PATHNAME_LEN		    128     //路径长度
#define MAX_PRESET_V13          16      //预置点
#define MAX_NUMBER_LEN			32		//号码最大长度
#define MAX_NAME_LEN			128		//设备名称最大长度
#define MAX_INDEX_LED           8       //LED索引最大值 2013-11-19
#define	MAX_CUSTOM_DIR			64      //自定义目录最大长度

#define CLOUD_NAME_LEN              48      //云存储服务器用户名长度
#define CLOUD_PASSWD_LEN            48      //云存储服务器密码长度

//2013-11-19
#define MAX_DEVNAME_LEN         32      //设备名称最大长度
#define MAX_LED_INFO            256     //屏幕字体显示信息最大长度
#define MAX_TIME_LEN            32      //时间最大长度
#define MAX_CARD_LEN            24      //卡号最大长度
#define MAX_OPERATORNAME_LEN    32      //操作人员名称最大长度

//异步登录回调状态宏定义
#define ASYN_LOGIN_SUCC			1		//异步登录成功
#define ASYN_LOGIN_FAILED		0		//异步登录失败


#define MAX_TIMESEGMENT_V30	    8       //9000设备最大时间段数
#define MAX_TIMESEGMENT		    4       //8000设备最大时间段数
#define MAX_ICR_NUM             8       //抓拍机红外滤光片预置点数2013-07-09

#define MAX_SHELTERNUM			4       //8000设备最大遮挡区域数
#define MAX_DAYS				7       //每周天数
#define PHONENUMBER_LEN			32      //pppoe拨号号码最大长度

#define MAX_DISKNUM_V30			33		//9000设备最大硬盘数/* 最多33个硬盘(包括16个内置SATA硬盘、1个eSATA硬盘和16个NFS盘) */
#define MAX_DISKNUM		        16      //8000设备最大硬盘数
#define MAX_DISKNUM_V10		    8       //1.2版本之前版本

#define MAX_WINDOW_V30			32      //9000设备本地显示最大播放窗口数
#define MAX_WINDOW_V40			64      //Netra 2.3.1扩展
#define MAX_WINDOW				16      //8000设备最大硬盘数
#define MAX_VGA_V30				4       //9000设备最大可接VGA数
#define MAX_VGA			    	1       //8000设备最大可接VGA数

#define MAX_USERNUM_V30			32      //9000设备最大用户数
#define MAX_USERNUM			    16      //8000设备最大用户数
#define MAX_EXCEPTIONNUM_V30	32      //9000设备最大异常处理数
#define MAX_EXCEPTIONNUM		16      //8000设备最大异常处理数
#define MAX_LINK				6       //8000设备单通道最大视频流连接数
#define MAX_ITC_EXCEPTIONOUT	32      //抓拍机最大报警输出

#define MAX_DECPOOLNUM			4       //单路解码器每个解码通道最大可循环解码数
#define MAX_DECNUM				4       //单路解码器的最大解码通道数（实际只有一个，其他三个保留）
#define MAX_TRANSPARENTNUM		2       //单路解码器可配置最大透明通道数
#define MAX_CYCLE_CHAN			16      //单路解码器最大轮巡通道数
#define MAX_CYCLE_CHAN_V30      64      //最大轮巡通道数（扩展）
#define MAX_DIRNAME_LENGTH		80      //最大目录长度
#define MAX_WINDOWS				16      //最大窗口数


#define MAX_STRINGNUM_V30		8		//9000设备最大OSD字符行数数
#define MAX_STRINGNUM			4       //8000设备最大OSD字符行数数
#define MAX_STRINGNUM_EX		8       //8000定制扩展
#define MAX_AUXOUT_V30			16      //9000设备最大辅助输出数
#define MAX_AUXOUT			    4       //8000设备最大辅助输出数
#define MAX_HD_GROUP			16      //9000设备最大硬盘组数
#define MAX_HD_GROUP_V40    	32      //设备最大硬盘组数
#define MAX_NFS_DISK			8       //8000设备最大NFS硬盘数

#define IW_ESSID_MAX_SIZE	    32      //WIFI的SSID号长度
#define IW_ENCODING_TOKEN_MAX	32      //WIFI密锁最大字节数
#define MAX_SERIAL_NUM			64	    //最多支持的透明通道路数
#define MAX_DDNS_NUMS	        10      //9000设备最大可配ddns数
#define MAX_DOMAIN_NAME		    64		/* 最大域名长度 */
#define MAX_EMAIL_ADDR_LEN	    48      //最大email地址长度
#define MAX_EMAIL_PWD_LEN		32      //最大email密码长度

#define MAXPROGRESS		        100     //回放时的最大百分率
#define MAX_SERIALNUM	        2       //8000设备支持的串口数 1-232， 2-485
#define CARDNUM_LEN		        20      //卡号长度
#define CARDNUM_LEN_OUT			32      //外部结构体卡号长度
#define MAX_VIDEOOUT_V30        4       //9000设备的视频输出数
#define MAX_VIDEOOUT	        2       //8000设备的视频输出数

#define MAX_PRESET_V30			256		/* 9000设备支持的云台预置点数 */
#define MAX_TRACK_V30			256		/* 9000设备支持的云台轨迹数 */
#define MAX_CRUISE_V30			256		/* 9000设备支持的云台巡航数 */
#define MAX_PRESET				128		/* 8000设备支持的云台预置点数 */
#define MAX_TRACK				128		/* 8000设备支持的云台轨迹数 */
#define MAX_CRUISE				128		/* 8000设备支持的云台巡航数 */

#define CRUISE_MAX_PRESET_NUMS	32 	    /* 一条巡航最多的巡航点 */

#define MAX_SERIAL_PORT         8       //9000设备支持232串口数
#define MAX_PREVIEW_MODE        8       /* 设备支持最大预览模式数目 1画面,4画面,9画面,16画面.... */
#define MAX_MATRIXOUT           16      /* 最大模拟矩阵输出个数 */
#define LOG_INFO_LEN            11840   /* 日志附加信息 */
#define DESC_LEN                16      /* 云台描述字符串长度 */
#define PTZ_PROTOCOL_NUM        200     /* 9000最大支持的云台协议数 */

#define MAX_AUDIO			    1       //8000语音对讲通道数
#define MAX_AUDIO_V30			2       //9000语音对讲通道数
#define MAX_CHANNUM			    16      //8000设备最大通道数
#define MAX_ALARMIN			    16      //8000设备最大报警输入数
#define MAX_ALARMOUT		    4       //8000设备最大报警输出数
//9000 IPC接入
#define MAX_ANALOG_CHANNUM      32      //最大32个模拟通道
#define MAX_ANALOG_ALARMOUT     32      //最大32路模拟报警输出
#define MAX_ANALOG_ALARMIN      32      //最大32路模拟报警输入

#define MAX_IP_DEVICE           32      //允许接入的最大IP设备数
#define MAX_IP_DEVICE_V40       64      // 允许接入的最大IP设备数 最多可添加64个 IVMS 2000等新设备
#define MAX_IP_CHANNEL          32      //允许加入的最多IP通道数
#define MAX_IP_ALARMIN          128     //允许加入的最多报警输入数
#define MAX_IP_ALARMOUT         64      //允许加入的最多报警输出数
#define MAX_IP_ALARMIN_V40      4096    //允许加入的最多报警输入数
#define MAX_IP_ALARMOUT_V40     4096    //允许加入的最多报警输出数

#define MAX_RECORD_FILE_NUM     20      // 每次删除或者刻录的最大文件数
//SDK_V31 ATM
#define MAX_ACTION_TYPE	        12	    //自定义协议叠加交易行为最大行为个数
#define MAX_ATM_PROTOCOL_NUM    256   //每种输入方式对应的ATM最大协议数
#define ATM_CUSTOM_PROTO        1025   //自定义协议 值为1025
#define ATM_PROTOCOL_SORT       4       //ATM协议段数
#define ATM_DESC_LEN            32      //ATM描述字符串长度
// SDK_V31 ATM

#define MAX_EVENTID_LEN         64   //事件ID长度
#define MAX_IPV6_LEN  			64   //IPv6地址最大长度

#define MAX_CHANNUM_V40         512
#define INVALID_VALUE_UINT32    0xffffffff   //无效值
#define MAX_MULTI_AREA_NUM      24

/* 最大支持的通道数 最大模拟加上最大IP支持 */
#define MAX_CHANNUM_V30               ( MAX_ANALOG_CHANNUM + MAX_IP_CHANNEL )//64
#define MAX_ALARMOUT_V40             (MAX_IP_ALARMOUT_V40 +MAX_ANALOG_ALARMOUT) //4128
#define MAX_ALARMOUT_V30              ( MAX_ANALOG_ALARMOUT + MAX_IP_ALARMOUT )//96
#define MAX_ALARMIN_V30               ( MAX_ANALOG_ALARMIN + MAX_IP_ALARMIN )//160
#define MAX_ALARMIN_V40             (MAX_IP_ALARMIN_V40 +MAX_ANALOG_ALARMOUT) //4182
#define MAX_ANALOG_ALARM_WITH_VOLT_LIMIT	16 //受电压限定的模拟报警最大输入数


/********************预览回调函数*********************/
#define NET_DVR_SYSHEAD            1    //系统头数据
#define NET_DVR_STREAMDATA        2    //视频流数据（包括复合流和音视频分开的视频流数据）
#define NET_DVR_AUDIOSTREAMDATA    3    //音频流数据
#define NET_DVR_STD_VIDEODATA    4    //标准视频流数据
#define NET_DVR_STD_AUDIODATA    5    //标准音频流数据
#define NET_DVR_SDP             6   //SDP信息(Rstp传输时有效)
#define NET_DVR_CHANGE_FORWARD  10  //码流改变为正放
#define NET_DVR_CHANGE_REVERSE  11  //码流改变为倒放
#define NET_DVR_PLAYBACK_ALLFILEEND      12  //回放文件结束标记
#define NET_DVR_PRIVATE_DATA    112 //私有数据,包括智能信息


#define MAX_ID_COUNT    256
#define MAX_STREAM_ID_COUNT    1024
#define STREAM_ID_LEN   32
#define PLAN_ID_LEN  32

#define TILT_UP			21	/* 云台以SS的速度上仰 */
#define TILT_DOWN		22	/* 云台以SS的速度下俯 */
#define PAN_LEFT		23	/* 云台以SS的速度左转 */
#define PAN_RIGHT		24	/* 云台以SS的速度右转 */
#define UP_LEFT			25	/* 云台以SS的速度上仰和左转 */
#define UP_RIGHT		26	/* 云台以SS的速度上仰和右转 */
#define DOWN_LEFT		27	/* 云台以SS的速度下俯和左转 */
#define DOWN_RIGHT		28	/* 云台以SS的速度下俯和右转 */
#define PAN_AUTO		29	/* 云台以SS的速度左右自动扫描 */


//球机位置信息
typedef struct
{
    WORD wAction;//获取时该字段无效
    WORD wPanPos;//水平参数
    WORD wTiltPos;//垂直参数
    WORD wZoomPos;//变倍参数
}NET_DVR_PTZPOS, *LPNET_DVR_PTZPOS;

//球机范围信息
typedef struct
{
    WORD wPanPosMin;//水平参数min
    WORD wPanPosMax;//水平参数max
    WORD wTiltPosMin;//垂直参数min
    WORD wTiltPosMax;//垂直参数max
    WORD wZoomPosMin;//变倍参数min
    WORD wZoomPosMax;//变倍参数max
}NET_DVR_PTZSCOPE, *LPNET_DVR_PTZSCOPE;

//rtsp配置 ipcamera专用
typedef struct
{
    DWORD dwSize;         //长度
    WORD  wPort;          //rtsp服务器侦听端口
    BYTE  byReserve[54];  //预留
}NET_DVR_RTSPCFG, *LPNET_DVR_RTSPCFG;

/********************************接口参数结构(begin)*********************************/
//NET_DVR_Login_V30()参数结构
typedef struct
{
    BYTE sSerialNumber[SERIALNO_LEN];  //序列号
    BYTE byAlarmInPortNum;		        //报警输入个数
    BYTE byAlarmOutPortNum;		        //报警输出个数
    BYTE byDiskNum;				    //硬盘个数
    BYTE byDVRType;				    //设备类型, 1:DVR 2:ATM DVR 3:DVS ......
    BYTE byChanNum;				    //模拟通道个数
    BYTE byStartChan;			        //起始通道号,例如DVS-1,DVR - 1
    BYTE byAudioChanNum;                //语音通道数
    BYTE byIPChanNum;					//最大数字通道个数，低位
    BYTE byZeroChanNum;			//零通道编码个数 //2010-01-16
    BYTE byMainProto;			//主码流传输协议类型 0-private, 1-rtsp,2-同时支持private和rtsp
    BYTE bySubProto;				//子码流传输协议类型0-private, 1-rtsp,2-同时支持private和rtsp
    BYTE bySupport;        //能力，位与结果为0表示不支持，1表示支持，
    //bySupport & 0x1, 表示是否支持智能搜索
    //bySupport & 0x2, 表示是否支持备份
    //bySupport & 0x4, 表示是否支持压缩参数能力获取
    //bySupport & 0x8, 表示是否支持多网卡
    //bySupport & 0x10, 表示支持远程SADP
    //bySupport & 0x20, 表示支持Raid卡功能
    //bySupport & 0x40, 表示支持IPSAN 目录查找
        //bySupport & 0x80, 表示支持rtp over rtsp
    BYTE bySupport1;        // 能力集扩充，位与结果为0表示不支持，1表示支持
        //bySupport1 & 0x1, 表示是否支持snmp v30
        //bySupport1 & 0x2, 支持区分回放和下载
        //bySupport1 & 0x4, 是否支持布防优先级
        //bySupport1 & 0x8, 智能设备是否支持布防时间段扩展
        //bySupport1 & 0x10, 表示是否支持多磁盘数（超过33个）
        //bySupport1 & 0x20, 表示是否支持rtsp over http
        //bySupport1 & 0x80, 表示是否支持车牌新报警信息2012-9-28, 且还表示是否支持NET_DVR_IPPARACFG_V40结构体
    BYTE bySupport2; /*能力，位与结果为0表示不支持，非0表示支持
                                                        bySupport2 & 0x1, 表示解码器是否支持通过URL取流解码
                                                        bySupport2 & 0x2,  表示支持FTPV40
                                                        bySupport2 & 0x4,  表示支持ANR
                                                        bySupport2 & 0x8,  表示支持CCD的通道参数配置
                                                        bySupport2 & 0x10,  表示支持布防报警回传信息（仅支持抓拍机报警 新老报警结构）
                                                        bySupport2 & 0x20,  表示是否支持单独获取设备状态子项
                                                        bySupport2 & 0x40,  表示是否是码流加密设备*/
    WORD wDevType;              //设备型号
    BYTE bySupport3; //能力集扩展，位与结果为0表示不支持，1表示支持
                                                    //bySupport3 & 0x1, 表示是否多码流
                                                    // bySupport3 & 0x4 表示支持按组配置， 具体包含 通道图像参数、报警输入参数、IP报警输入、输出接入参数、
                        // 用户参数、设备工作状态、JPEG抓图、定时和时间抓图、硬盘盘组管理
                                                    //bySupport3 & 0x8为1 表示支持使用TCP预览、UDP预览、多播预览中的"延时预览"字段来请求延时预览（后续都将使用这种方式请求延时预览）。而当bySupport3 & 0x8为0时，将使用 "私有延时预览"协议。
                                                    //bySupport3 & 0x10 表示支持"获取报警主机主要状态（V40）"。
                                                    //bySupport3 & 0x20 表示是否支持通过DDNS域名解析取流

    BYTE byMultiStreamProto;//是否支持多码流,按位表示,0-不支持,1-支持,bit1-码流3,bit2-码流4,bit7-主码流，bit-8子码流
    BYTE byStartDChan;		//起始数字通道号,0表示无效
    BYTE byStartDTalkChan;	//起始数字对讲通道号，区别于模拟对讲通道号，0表示无效
    BYTE byHighDChanNum;		//数字通道个数，高位
    BYTE bySupport4;        //能力集扩展，位与结果为0表示不支持，1表示支持
                        //bySupport4 & 0x4表示是否支持拼控统一接口
    BYTE byLanguageType;// 支持语种能力,按位表示,每一位0-不支持,1-支持
                        //  byLanguageType 等于0 表示 老设备
                        //  byLanguageType & 0x1表示支持中文
                        //  byLanguageType & 0x2表示支持英文
    BYTE byRes2[9];	//保留
} NET_DVR_DEVICEINFO_V30, *LPNET_DVR_DEVICEINFO_V30;

//预览V40接口
typedef struct tagNET_DVR_PREVIEWINFO
{
    LONG lChannel;//通道号
    DWORD dwStreamType;	// 码流类型，0-主码流，1-子码流，2-码流3，3-码流4 等以此类推
    DWORD dwLinkMode;// 0：TCP方式,1：UDP方式,2：多播方式,3 - RTP方式，4-RTP/RTSP,5-RSTP/HTTP
    HWND hPlayWnd;//播放窗口的句柄,为NULL表示不播放图象
    DWORD bBlocked;  //0-非阻塞取流, 1-阻塞取流, 如果阻塞SDK内部connect失败将会有5s的超时才能够返回,不适合于轮询取流操作.
    DWORD bPassbackRecord; //0-不启用录像回传,1启用录像回传
    BYTE byPreviewMode;//预览模式，0-正常预览，1-延迟预览
    BYTE byStreamID[STREAM_ID_LEN];//流ID，lChannel为0xffffffff时启用此参数
    BYTE byProtoType; //应用层取流协议，0-私有协议，1-RTSP协议
    BYTE byRes[222];
}NET_DVR_PREVIEWINFO, *LPNET_DVR_PREVIEWINFO;


typedef struct
{
    LONG lChannel;//
    LONG lLinkMode;//
    HWND hPlayWnd;//
    char* sMultiCastIP;//
    BYTE byProtoType; //
    BYTE byRes[3];
}NET_DVR_CLIENTINFO, *LPNET_DVR_CLIENTINFO;

//云台区域选择放大缩小(私有 快球专用)
typedef struct
{
    int xTop;     //方框起始点的x坐标
    int yTop;     //方框结束点的y坐标
    int xBottom;  //方框结束点的x坐标
    int yBottom;  //方框结束点的y坐标
    int bCounter; //保留
}NET_DVR_POINT_FRAME, *LPNET_DVR_POINT_FRAME;

typedef struct    tagNET_DVR_PTZ_POSITION
{
    // 是否启用场景，在设置场景行为规则的时候该字段无效，在设置球机本地配置场景位置信息时作为使能位
    BYTE byEnable;
    BYTE byRes1[3];  //保留
    BYTE byPtzPositionName[NAME_LEN]; //场景位置名称
    NET_DVR_PTZPOS struPtzPos; //ptz 坐标
    BYTE byRes2[40];
}NET_DVR_PTZ_POSITION, *LPNET_DVR_PTZ_POSITION;


//typedef void (CALLBACK *fLoginResultCallBack) (LONG lUserID, DWORD dwResult, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo , void* pUser);

#define NET_DVR_DEV_ADDRESS_MAX_LEN 129
#define NET_DVR_LOGIN_USERNAME_MAX_LEN 64
#define NET_DVR_LOGIN_PASSWD_MAX_LEN 64


NET_DVR_API BOOL __stdcall NET_DVR_Init();
NET_DVR_API BOOL __stdcall NET_DVR_Cleanup();

////NET_DVR_SetDVRMessage的扩展
//#ifdef _WIN32
//NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessage(UINT nMessage,HWND hWnd);
//NET_DVR_API BOOL __stdcall NET_DVR_SetExceptionCallBack_V30(UINT nMessage, HWND hWnd, void (CALLBACK* fExceptionCallBack)(DWORD dwType, LONG lUserID, LONG lHandle, void *pUser), void *pUser);
//#endif

//NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack(BOOL (CALLBACK *fMessCallBack)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen));
//NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack_EX(BOOL (CALLBACK *fMessCallBack_EX)(LONG lCommand,LONG lUserID,char *pBuf,DWORD dwBufLen));
//NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessCallBack_NEW(BOOL (CALLBACK *fMessCallBack_NEW)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen, WORD dwLinkDVRPort));
//NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack(BOOL (CALLBACK *fMessageCallBack)(LONG lCommand,char *sDVRIP,char *pBuf,DWORD dwBufLen, DWORD dwUser), DWORD dwUser);
//typedef void (CALLBACK *MSGCallBack)(LONG lCommand, NET_DVR_ALARMER *pAlarmer, char *pAlarmInfo, DWORD dwBufLen, void* pUser);
//NET_DVR_API BOOL __stdcall NET_DVR_SetDVRMessageCallBack_V30(MSGCallBack fMessageCallBack, void* pUser);

NET_DVR_API BOOL __stdcall NET_DVR_SetConnectTime(DWORD dwWaitTime = 3000, DWORD dwTryTimes = 3);
NET_DVR_API BOOL __stdcall NET_DVR_SetReconnect(DWORD dwInterval = 30000, BOOL bEnableRecon = TRUE);
NET_DVR_API DWORD __stdcall NET_DVR_GetSDKVersion();
NET_DVR_API DWORD __stdcall NET_DVR_GetSDKBuildVersion();
NET_DVR_API int __stdcall NET_DVR_IsSupport();
NET_DVR_API BOOL __stdcall NET_DVR_StartListen(char *sLocalIP,WORD wLocalPort);
NET_DVR_API BOOL __stdcall NET_DVR_StopListen();

//NET_DVR_API LONG __stdcall NET_DVR_StartListen_V30(char *sLocalIP, WORD wLocalPort, MSGCallBack DataCallback, void* pUserData = NULL);
NET_DVR_API BOOL __stdcall NET_DVR_StopListen_V30(LONG lListenHandle);
//NET_DVR_API LONG __stdcall NET_DVR_Login(char *sDVRIP,WORD wDVRPort,char *sUserName,char *sPassword,LPNET_DVR_DEVICEINFO lpDeviceInfo);
NET_DVR_API LONG __stdcall NET_DVR_Login_V30(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);

//NET_DVR_API LONG __stdcall NET_DVR_Login_V40(LPNET_DVR_USER_LOGIN_INFO pLoginInfo,LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
//NET_DVR_API BOOL __stdcall NET_DVR_Login_Check(char *sDVRIP, WORD wDVRPort, char *sUserName, char *sPassword, LPNET_DVR_DEVICEINFO_V30 lpDeviceInfo);
NET_DVR_API BOOL __stdcall NET_DVR_Logout(LONG lUserID);
NET_DVR_API BOOL __stdcall NET_DVR_Logout_V30(LONG lUserID);
NET_DVR_API DWORD __stdcall NET_DVR_GetLastError();
NET_DVR_API char* __stdcall NET_DVR_GetErrorMsg(LONG *pErrorNo = NULL);
NET_DVR_API BOOL __stdcall NET_DVR_SetShowMode(DWORD dwShowType,COLORREF colorKey);
NET_DVR_API BOOL __stdcall NET_DVR_GetDVRIPByResolveSvr(char *sServerIP, WORD wServerPort, BYTE *sDVRName,WORD wDVRNameLen,BYTE *sDVRSerialNumber,WORD wDVRSerialLen,char* sGetIP);
NET_DVR_API BOOL  __stdcall NET_DVR_GetDVRIPByResolveSvr_EX(char *sServerIP, WORD wServerPort, BYTE *sDVRName, WORD wDVRNameLen, BYTE *sDVRSerialNumber, WORD wDVRSerialLen, char* sGetIP, DWORD *dwPort);

//预览相关接口
//NET_DVR_API LONG __stdcall NET_DVR_PlayDirect(char *sDVRIP, char *sUserName, char *sPassword, LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);
//NET_DVR_API LONG __stdcall NET_DVR_RealPlay(LONG lUserID,LPNET_DVR_CLIENTINFO lpClientInfo);
//NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V30(LONG lUserID, LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);
NET_DVR_API BOOL __stdcall NET_DVR_StopRealPlay(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_StopPlayDirect(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_RigisterDrawFun(LONG lRealHandle,void (CALLBACK* fDrawFun)(LONG lRealHandle,HDC hDc,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetPlayerBufNumber(LONG lRealHandle,DWORD dwBufNum);
NET_DVR_API BOOL __stdcall NET_DVR_ThrowBFrame(LONG lRealHandle,DWORD dwNum);
NET_DVR_API BOOL __stdcall NET_DVR_SetAudioMode(DWORD dwMode);
NET_DVR_API BOOL __stdcall NET_DVR_OpenSound(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseSound();
NET_DVR_API BOOL __stdcall NET_DVR_OpenSoundShare(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_CloseSoundShare(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_Volume(LONG lRealHandle,WORD wVolume);
NET_DVR_API BOOL __stdcall NET_DVR_SaveRealData(LONG lRealHandle,char *sFileName);
NET_DVR_API BOOL __stdcall NET_DVR_StopSaveRealData(LONG lRealHandle);
NET_DVR_API BOOL __stdcall NET_DVR_SetRealDataCallBack(LONG lRealHandle,void(CALLBACK *fRealDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_SetStandardDataCallBack(LONG lRealHandle,void(CALLBACK *fStdDataCallBack) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer,DWORD dwBufSize,DWORD dwUser),DWORD dwUser);
NET_DVR_API BOOL __stdcall NET_DVR_CapturePicture(LONG lRealHandle,char *sPicFileName);//bmp
NET_DVR_API BOOL __stdcall NET_DVR_SetCapturePictureMode(DWORD dwCaptureMode);

typedef void (CALLBACK *REALDATACALLBACK) (LONG lPlayHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser);
NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V40(LONG lUserID, LPNET_DVR_PREVIEWINFO lpPreviewInfo, REALDATACALLBACK fRealDataCallBack_V30 = NULL, void* pUser = NULL);
NET_DVR_API LONG __stdcall NET_DVR_RealPlay_V30(LONG lUserID, LPNET_DVR_CLIENTINFO lpClientInfo, void(CALLBACK *fRealDataCallBack_V30) (LONG lRealHandle, DWORD dwDataType, BYTE *pBuffer, DWORD dwBufSize, void* pUser) = NULL, void* pUser = NULL, BOOL bBlocked = FALSE);

//动态生成I帧
NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrame(LONG lUserID, LONG lChannel);//主码流
NET_DVR_API BOOL __stdcall NET_DVR_MakeKeyFrameSub(LONG lUserID, LONG lChannel);//子码流

//云台控制相关接口
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_Other(LONG lUserID,LONG lChannel,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_Other(LONG lUserID,LONG lChannel,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_TransPTZ_EX(LONG lRealHandle,char *pPTZCodeBuf,DWORD dwBufSize);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControl_EX(LONG lRealHandle,DWORD dwPTZCommand,DWORD dwStop);
NET_DVR_API BOOL __stdcall NET_DVR_PTZPreset_EX(LONG lRealHandle,DWORD dwPTZPresetCmd,DWORD dwPresetIndex);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_Other(LONG lUserID,LONG lChannel,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZCruise_EX(LONG lRealHandle,DWORD dwPTZCruiseCmd,BYTE byCruiseRoute, BYTE byCruisePoint, WORD wInput);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack(LONG lRealHandle, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_Other(LONG lUserID, LONG lChannel, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZTrack_EX(LONG lRealHandle, DWORD dwPTZTrackCmd);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_Other(LONG lUserID, LONG lChannel, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
NET_DVR_API BOOL __stdcall NET_DVR_PTZControlWithSpeed_EX(LONG lRealHandle, DWORD dwPTZCommand, DWORD dwStop, DWORD dwSpeed);
//NET_DVR_API BOOL __stdcall NET_DVR_GetPTZCruise(LONG lUserID,LONG lChannel,LONG lCruiseRoute, LPNET_DVR_CRUISE_RET lpCruiseRet);

NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn(LONG lRealHandle, LPNET_DVR_POINT_FRAME pStruPointFrame);
NET_DVR_API BOOL __stdcall NET_DVR_PTZSelZoomIn_EX(LONG lUserID, LONG lChannel, LPNET_DVR_POINT_FRAME pStruPointFrame);

NET_DVR_API BOOL __stdcall NET_DVR_GetPtzPosition(LONG lUserID, LONG lChannel, LONG lPositionID, LPNET_DVR_PTZ_POSITION lpPtzPosition);
NET_DVR_API BOOL __stdcall NET_DVR_SetPtzPosition(LONG lUserID, LONG lChannel, LONG lPositionID, LPNET_DVR_PTZ_POSITION lpPtzPosition);

#endif
