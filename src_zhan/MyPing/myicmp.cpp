#include "myicmp.h"

extern int alive;

void MyIcmp::icmp_sigint(int signo)
{
    alive = 0;
}

MyIcmp::MyIcmp()
{
   send_count=0;
   sendsig=1;
   signal(SIGINT,icmp_sigint);
   Pub=N.advertise<autonavigation::Ping>("ping",10);

}
//Calculation check sum
unsigned short MyIcmp::calChksum(unsigned short *addr, int len)
{
    int nleft=len;
    int sum=0;
    unsigned short *w=addr;
    unsigned short answer=0;
    while(nleft>1)
    {
        sum+=*w++;
        nleft-=2;
    }
    if( nleft==1)
    {
        *(unsigned char *)(&answer)=*(unsigned char *)w;
        sum+=answer;
    }
    sum=(sum>>16)+(sum&0xffff);
    sum+=(sum>>16);
    answer=~sum;
    return answer;

}

timeval MyIcmp::calTimeOffset(timeval begin, timeval end)
{
    struct timeval ans;
    ans.tv_sec = end.tv_sec - begin.tv_sec;
    ans.tv_usec = end.tv_usec - begin.tv_usec;
   // printf("cal:%d\t%d\n",ans.tv_sec,ans.tv_usec);
    if(ans.tv_usec < 0)
    {
        ans.tv_sec--;
        ans.tv_usec+=1000000;
    }
    return ans;
}

void MyIcmp::icmpPack(icmp *icmphdr, int seq, int length)
{
    int i = 0;
    icmphdr->icmp_type = ICMP_ECHO;
    icmphdr->icmp_code = 0;
    icmphdr->icmp_cksum = 0;
    icmphdr->icmp_seq = seq;
    icmphdr->icmp_id = pid & 0xffff;
    for(i=0;i<length;i++)
    {
        icmphdr->icmp_data[i] = i;
    }
    icmphdr->icmp_cksum = calChksum((unsigned short*)icmphdr, length);
}

int MyIcmp::icmpUnpack(char *buf, int len)
{
    printf("BB\n");
    int iphdr_len;
    struct timeval begin_time, recv_time, offset_time;
    int rtt;

    struct ip* ip_hdr = (struct ip *)buf;
    iphdr_len = ip_hdr->ip_hl*4;
    struct icmp* icmp = (struct icmp*)(buf+iphdr_len);
    len-=iphdr_len;
    if(len < 8)
    {
        fprintf(stderr, "Invalid icmp packet.Its length is less than 8\n");
        return -1;
    }
    if((icmp->icmp_type == ICMP_ECHOREPLY)&&icmp->icmp_id == (pid & 0xffff)&&icmp->icmp_seq==(send_count-1))
    {
        if(icmp->icmp_seq <0)
        {
            fprintf(stderr, "icmp packet seq is out of range!\n");
            return -1;
        }
        autonavigation::Ping msg;
        begin_time = ping_packet.begin_time;
        gettimeofday(&recv_time, NULL);

        offset_time = calTimeOffset(begin_time, recv_time);
      //  printf("%d\n",offset_time.tv_usec);
        msg.rtt = offset_time.tv_sec*1000 + offset_time.tv_usec/1000;
       // system("clear");
        printf("rtt:%d\n",msg.rtt);
        msg.ip=inet_ntoa(dest.sin_addr);
        Pub.publish(msg);
        sendsig=0;
    }
    else
    {
        printf("SS\n");
        sendsig=1;
    }
    return 0;
}

void MyIcmp::pingSend()
{
    char send_buf[128];
    memset(send_buf, 0, sizeof(send_buf));
    gettimeofday(&start_time, NULL);
    int size = 0;
    gettimeofday(&(ping_packet.begin_time), NULL);

    icmpPack((struct icmp*)send_buf, send_count, 64);
    int  sig2=1;
    autonavigation::Ping msg;
    while(sig2&&alive)
    {
        size = sendto(rawsock, send_buf, 64, 0, (struct sockaddr*)&dest, sizeof(dest));
        printf("send size%d\n",size);
        if(size < 0)
        {
            msg.rtt=-1;
            Pub.publish(msg);
            sleep(1);
            continue;
        }
        sig2=0;
    }
    send_count++;
}

void MyIcmp::pingRecv()
{
    printf("AA\n");
    struct timeval tv;
    tv.tv_usec = 0;
    tv.tv_sec = 1;
    fd_set read_fd;
    char recv_buf[512];
    memset(recv_buf, 0 ,sizeof(recv_buf));

    int ret = 0;
    FD_ZERO(&read_fd);
    FD_SET(rawsock, &read_fd);
    ret = select(rawsock+1, &read_fd, NULL, NULL, &tv);
    switch(ret)
    {
    case -1:
        fprintf(stderr,"fail to select!\n");
        break;
    case 0:
        break;
    default:
    {
        int size = recv(rawsock, recv_buf, sizeof(recv_buf), 0);
        printf("revc size%d\n",size);
        if(size < 0)
        {
            fprintf(stderr,"recv data fail!\n");
            return;
        }

        ret = icmpUnpack(recv_buf, size);
        if(ret == -1)
        {
            return;
        }
        recv_count++;
    }
        break;
    }
}

void MyIcmp::pingStatsShow()
{
    long time = time_interval.tv_sec*1000+time_interval.tv_usec/1000;
    printf("%d packets transmitted, %d recieved, %d%c packet loss, time %ldms\n",
           send_count, recv_count, (send_count-recv_count)*100/send_count, '%', time);
}

