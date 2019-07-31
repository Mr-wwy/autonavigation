#ifndef MYICMP_H
#define MYICMP_H
#include <myhead.h>

class MyIcmp
{
public:
    MyIcmp();
    unsigned short calChksum(unsigned short *addr,int len);
    struct timeval calTimeOffset(struct timeval begin, struct timeval end);
    void icmpPack(struct icmp* icmphdr, int seq, int length);
    int icmpUnpack(char* buf, int len);
    void pingSend();
    void pingRecv();
    static void icmp_sigint(int signo);
    void pingStatsShow();

    pid_t pid;

    int rawsock;
    struct sockaddr_in dest;
    struct timeval start_time;
    struct timeval end_time;
    struct timeval time_interval;
    ros::NodeHandle N;
    ros::Publisher Pub;
    int send_count;
    int recv_count;

    int whilenumsig;

    ping_packet_status ping_packet;
    int sendsig;
};

#endif // MYICMP_H
