/************************************************************************/
/*                                                                                                                          */
/*                                      公共定义                                                             */
/*                                                                                                                          */
/*                                                                                                                          */
/************************************************************************/
    
#ifndef __COMMONDEFINITION__
#define __COMMONDEFINITION__

#include <iostream>
#include <queue>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/sem.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <cstring>
#include <cstdio>
#include <signal.h>
#include <errno.h>
#include <string.h>
#include <string>
#include <sys/time.h>
#include <time.h>
#include <pwd.h>
#include <sys/prctl.h>

#ifndef PI
#define PI 3.1415926535897932384626433832795
#endif

#ifndef Pi
#define Pi 3.1415926535897932384626433832795
#endif

//pi在很多开源库中有定义，不要用
//#ifndef pi
//#define pi 3.1415926535897932384626433832795
//#endif


#ifndef __INT64__
#define __INT64__
typedef  signed     long   long   INT64;
#endif

#ifndef __UINT64__
#define __UINT64__
typedef  unsigned   long   long  UINT64;
#endif

#ifndef __INT32__
#define __INT32__
typedef  signed     int         INT32;
#endif

#ifndef __UINT32__
#define __UINT32__
typedef  unsigned   int         UINT32;
#endif

#ifndef __INT16__
#define __INT16__
typedef  signed     short       INT16;
#endif

#ifndef __UINT16__
#define __UINT16__
typedef  unsigned   short       UINT16;
#endif

#ifndef __INT8__
#define __INT8__
typedef  signed     char        INT8;
#endif

#ifndef __UINT8__
#define __UINT8__
typedef  unsigned   char        UINT8;
#endif


//************************************************************************//
//
//
//                                  msg 名称在此定义
//
//
//
//
//************************************************************************//


//#define LOCALPOSE_MSG          "localpose_msg"
//#define GLOBALPOSE_MSG         "globalpose_msg"  
#define ROS_LOCALPOSE_MSG          "LocalPoseData"
#define GLOBALPOSE_MSG         "insMsg"
#define VLP16DATA_MSG          "vlp16data_msg"
#define VLP16SCAN_MSG          "vlp16scan_msg"
#define RADAR_FRONT_MSG        "radar_front_msg"    //esr
#define RADAR_BACK_MSG         "radar_back_msg"    //esr
#define IFVDATA_MSG            "IFVData_msg"

#endif
