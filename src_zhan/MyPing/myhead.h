#ifndef MYHEAD_H
#define MYHEAD_H
#include <time.h>
#include <netinet/ip_icmp.h>
#include <stdio.h>
#include <sys/time.h>
#include <ros/ros.h>
#include <signal.h>
#include <pthread.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <autonavigation/Ping.h>
#define PACKET_SEND_MAX_NUM 64

typedef struct ping_packet_status
{
    struct timeval begin_time;
    int seq;
}ping_packet_status;


#endif // MYHEAD_H
