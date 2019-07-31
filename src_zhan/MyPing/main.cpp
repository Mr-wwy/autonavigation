#include <iostream>
#include <myicmp.h>

using namespace std;

int alive;

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"Ping");
    alive = 1;
    MyIcmp MI;
    int size = 128*1024;//128k
    struct protoent* protocol = NULL;
    char dest_addr_str[80];//IP
    memset(dest_addr_str, 0, 80);
    unsigned int inaddr = 1;
    struct hostent* host = NULL;
    if(argc < 2)
    {
        printf("Invalid IP ADDRESS!\n");
        return -1;
    }

    protocol = getprotobyname("icmp");
    printf("aa%s\n",protocol->p_name);
    if(protocol == NULL)
    {
        printf("Fail to getprotobyname!\n");
        return -1;
    }
    memcpy(dest_addr_str, argv[1], strlen(argv[1])+1);
    MI.rawsock = socket(AF_INET,SOCK_RAW,protocol->p_proto);
    if(MI.rawsock < 0)
    {
        printf("Fail to create socket!\n");
        return -1;
    }
    MI.pid = getpid();
    setsockopt(MI.rawsock, SOL_SOCKET, SO_RCVBUF, &size, sizeof(size));
    bzero(&MI.dest,sizeof(MI.dest));

    MI.dest.sin_family = AF_INET;

    inaddr = inet_addr(argv[1]);
    if(inaddr == INADDR_NONE)
    {
        int sig1=1;
        while(sig1&&alive==1)
        {
            host = gethostbyname(argv[1]);
            if(host == NULL)
            {
                autonavigation::Ping msg;
                msg.rtt=-1;
                MI.Pub.publish(msg);
                sig1=1;
                sleep(1);
                continue;
            }
            sig1=0;
            memcpy((char*)&MI.dest.sin_addr, host->h_addr, host->h_length);
        }
    }
    else
    {
        memcpy((char*)&MI.dest.sin_addr, &inaddr, sizeof(inaddr));
    }
    inaddr = MI.dest.sin_addr.s_addr;
    printf("PING %s, (%d.%d.%d.%d) 56(84) bytes of data.\n",dest_addr_str,
           (inaddr&0x000000ff), (inaddr&0x0000ff00)>>8,
           (inaddr&0x00ff0000)>>16, (inaddr&0xff000000)>>24);

    ros::Rate r(1);
    while(alive)
    {
        MI.whilenumsig=0;
        MI.pingSend();
        while(MI.sendsig&&alive)
        {
            MI.pingRecv();
            MI.whilenumsig++;
            if(MI.whilenumsig>=10)
            {
                printf("over\n");
                break;
            }
            printf("AA%d\n",MI.whilenumsig);
        }
        MI.sendsig=1;
        printf("BB%d\n",MI.whilenumsig);
        r.sleep();
    }
    close(MI.rawsock);
    return 0;
}

