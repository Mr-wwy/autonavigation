#ifndef __COMMONFUNC__
#define __COMMONFUNC__


#include "CommonDefinition.h"

namespace autonavigation{


inline void setSignalBlock()
{
    sigset_t newmask;
    sigset_t oldmask;

    //清除所有信号的阻塞标志
    sigemptyset(&newmask);
    sigaddset(&newmask, SIGINT);
    sigaddset(&newmask, SIGTERM);

    //更改进程的信号屏蔽字
    sigprocmask(SIG_BLOCK, &newmask, &oldmask);
    
}

inline void setSignalUnblock()
{
    sigset_t newmask;
    sigset_t oldmask;

    //清除所有信号的阻塞标志
    sigemptyset(&newmask);
    sigaddset(&newmask, SIGINT);
    sigaddset(&newmask, SIGTERM);

    //更改进程的信号屏蔽字
    sigprocmask(SIG_UNBLOCK, &newmask, &oldmask);
    
}

inline bool ok()
{
    sigset_t pendmask;

    //取阻塞信号
    if (sigpending(&pendmask) < 0)
    {
        return true;
    }

    //判断某个信号是否被阻塞
    if (sigismember(&pendmask, SIGINT) || sigismember(&pendmask, SIGTERM))
    {
        return false;
    }

    return true;
}

inline void init()
{
    //阻塞ctrl+c 和term信号
    setSignalBlock();
}

inline char* getCurrentTime(char *t)
{
    memset(t, 0, strlen(t));
    struct timeval _tv;
    struct tm *_now;
    time_t _time;

    gettimeofday(&_tv, NULL);
    _time = _tv.tv_sec;
    _now = localtime(&_time);

    sprintf(t, "%4d-%02d-%02d %02d:%02d:%02d.%06ld", 
                               1900+_now->tm_year,
                               1+_now->tm_mon,
                               _now->tm_mday,
                               _now->tm_hour,
                               _now->tm_min,
                               _now->tm_sec,
                               _tv.tv_usec);
    return t;
}






}
#endif