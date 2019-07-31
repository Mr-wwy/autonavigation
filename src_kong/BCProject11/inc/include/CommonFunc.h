#ifndef __COMMONFUNC__
#define __COMMONFUNC__


#include "CommonDefinition.h"

namespace autonavigation{


inline void setSignalBlock()
{
    sigset_t newmask;
    sigset_t oldmask;

    //��������źŵ�������־
    sigemptyset(&newmask);
    sigaddset(&newmask, SIGINT);
    sigaddset(&newmask, SIGTERM);

    //���Ľ��̵��ź�������
    sigprocmask(SIG_BLOCK, &newmask, &oldmask);
    
}

inline void setSignalUnblock()
{
    sigset_t newmask;
    sigset_t oldmask;

    //��������źŵ�������־
    sigemptyset(&newmask);
    sigaddset(&newmask, SIGINT);
    sigaddset(&newmask, SIGTERM);

    //���Ľ��̵��ź�������
    sigprocmask(SIG_UNBLOCK, &newmask, &oldmask);
    
}

inline bool ok()
{
    sigset_t pendmask;

    //ȡ�����ź�
    if (sigpending(&pendmask) < 0)
    {
        return true;
    }

    //�ж�ĳ���ź��Ƿ�����
    if (sigismember(&pendmask, SIGINT) || sigismember(&pendmask, SIGTERM))
    {
        return false;
    }

    return true;
}

inline void init()
{
    //����ctrl+c ��term�ź�
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