#include "logitech.h"
#define WHEEL_MAX_DEGREE 2500.0
#define LOGITECH_WHEEL_ANGLE 450.0


logitech::logitech()
{


}

bool logitech::init()
{
    int _ret = 0;

    m_subscriber_VehicleStatus = m_nodeHandle.subscribe(VEHICLESTATUS, 10, &logitech::VehicleStatus_callback, this);

    m_publisher_Logitech = m_nodeHandle.advertise<autonavigation::Logitech>(LOGITECH, 10);

    m_pLogitech = boost::make_shared<autonavigation::Logitech>();
    m_pLogitech->ConcatenonSignal=0;//未连接和初始值为0,连接成功为1
    m_publisher_Logitech.publish(m_pLogitech);

    while (ros::ok())    // && autonavigation::ok()
    {
        _ret = findDevice();

        if (!_ret)
        {
            ROS_ERROR("can't find "DEVICE_KEY1" "DEVICE_KEY2" "DEVICE_KEY3"!");
            usleep(1000000);
            continue;
        }
        else
        {
            break;
        }
    }
    isfirst=true;
    isfirst_data=true;

    m_pLogitech->ShiftPaddlesR=0;
    m_pLogitech->ShiftPaddlesL=0;

    m_pLogitech->SteeringWheel=0;
    m_pLogitech->Brake=0;
    m_pLogitech->Clutch=0;
    m_pLogitech->SasPedal=0;
    m_pLogitech->ConcatenonSignal=1;
    m_publisher_Logitech.publish(m_pLogitech);

    return initDevice();

}
int logitech::findDevice()//找到设备
{
    memset(m_evnetName, 0, EVENT_LEN);

    std::ifstream _device;

    _device.open(DEVICE_PATH, std::ios::in);

    if (!_device.is_open())
    {
        ROS_ERROR("can't open file ["DEVICE_PATH"]");
        return 0;
    }

    std::string _str;
    int _ret = 0;
    int _ntu = 0;
    size_t pos;
    while (getline(_device, _str))//读一行数据
    {
        if (_str.empty())
        {
            continue;
        }
        if (_ret == 0)
        {
            pos = _str.find(DEVICE_KEY1);
            if (pos == std::string::npos)
            {
                continue;
            }

            pos = _str.find(DEVICE_KEY2);
            if (pos == std::string::npos)
            {
                continue;
            }

            pos = _str.find(DEVICE_KEY3);
            if (pos == std::string::npos)
            {
                continue;
            }
            _ret = 1;
        }
        else
        {
            pos = _str.find(EVENT_KEY);
            if (pos == std::string::npos)
            {
                continue;
            }
            pos = _str.find("=");
            if (pos != std::string::npos)
            {
                _str = _str.substr(pos + 1, _str.size());
                pos = _str.find(" ");
                if (pos != std::string::npos)
                {
                    _str = _str.substr(0, pos);
                    strcpy(m_evnetName, INPUT_PATH);
                    strcat(m_evnetName, _str.c_str());
                    ROS_INFO("event name: [%s]", m_evnetName);
                    _ntu = 1;
                    break;
                }
            }
        }
    }
    _device.close();
    return _ntu;
}

int logitech::initDevice()
{
    unsigned char key_bits[1 + KEY_MAX/8/sizeof(unsigned char)];
    unsigned char abs_bits[1 + ABS_MAX/8/sizeof(unsigned char)];
    unsigned char ff_bits[1 + FF_MAX/8/sizeof(unsigned char)];

    struct input_event event;
    struct input_absinfo absinfo;

    m_deviceHandle = open(m_evnetName, O_RDWR|O_NONBLOCK);
    if (m_deviceHandle < 0)
    {
        ROS_ERROR("can't open %s(%s), [%s: %d]", m_evnetName, strerror(errno), __FILE__, __LINE__);
        return 0;
    }
    memset(key_bits,0,sizeof(key_bits));
    if (ioctl(m_deviceHandle, EVIOCGBIT(EV_KEY,sizeof(key_bits)),key_bits)<0)
    {
        ROS_ERROR("ERROR: can not get key bits (%s) [%s: %d]", strerror(errno), __FILE__, __LINE__);
        return 0;
    }

    //EVIOCGBIT:get event bits
    memset(abs_bits,0,sizeof(abs_bits));
    if (ioctl(m_deviceHandle,EVIOCGBIT(EV_ABS,sizeof(abs_bits)),abs_bits)<0)
    {
        ROS_ERROR("ERROR: can not get abs bits (%s) [%s: %d]", strerror(errno), __FILE__, __LINE__);
        return 0;
    }

    //EVIOCGBIT:get event bits
    memset(ff_bits,0,sizeof(ff_bits));
    if (ioctl(m_deviceHandle, EVIOCGBIT(EV_FF ,sizeof(ff_bits)),ff_bits)<0)
    {
        ROS_ERROR("ERROR: can not get ff bits (%s) [%s: %d]", strerror(errno), __FILE__, __LINE__);
        return 0;
    }

    if (!testBit(axis_code, abs_bits))
    {
        ROS_ERROR("ERROR: selected axis %s not available [%s:%d] (see available ones with fftest)", strerror(errno), __FILE__, __LINE__);
        return 0;
    }

    //get abs value/limits
    if (ioctl(m_deviceHandle, EVIOCGABS(axis_code),&absinfo)<0)
    {
        ROS_ERROR("can not get axis value range (%s) [%s:%d]", strerror(errno), __FILE__, __LINE__);
        return 0;
    }

    axis_min = absinfo.minimum;
    axis_max = absinfo.maximum;
    if (axis_min>=axis_max)
    {
        ROS_ERROR("ERROR: bad axis value range (%d,%d) [%s:%d]", axis_min,axis_max, __FILE__, __LINE__);
        return 0;
    }
//    Force feedback effect types
//    FF_RUMBLE	       0x50
//    FF_PERIODIC	0x51
//    FF_CONSTANT	0x52
//    FF_SPRING	       0x53
//    FF_FRICTION	0x54
//    FF_DAMPER	       0x55
//    FF_INERTIA	       0x56
//    FF_RAMP		0x57
    if (!testBit(FF_CONSTANT, ff_bits))
    {
        ROS_ERROR("device (or driver) has no constant force feedback support [%s:%d]", __FILE__, __LINE__);
        return 0;
    }
    if (autocenter_off)
    {
        memset(&event,0,sizeof(event));
        event.type=EV_FF;
        event.code=FF_AUTOCENTER;
        event.value=0;
        if (write(m_deviceHandle,&event,sizeof(event))!=sizeof(event))
        {
            ROS_ERROR("ERROR: failed to disable auto centering (%s) [%s:%d]", strerror(errno),__FILE__,__LINE__);
            return 0;
        }
    }

    memset(&effect,0,sizeof(effect));
    effect.type=FF_CONSTANT;
    effect.id=-1;
    effect.trigger.button=0;
    effect.trigger.interval=0;
    effect.replay.length=0xffff;
    effect.replay.delay=0;
    effect.u.constant.level=0;
    effect.direction=0xC000;
    effect.u.constant.envelope.attack_length=0;
    effect.u.constant.envelope.attack_level=0;
    effect.u.constant.envelope.fade_length=0;
    effect.u.constant.envelope.fade_level=0;

    //send a force effect to a force feedback device
    if (ioctl(m_deviceHandle, EVIOCSFF,&effect)<0)
    {
        ROS_ERROR("uploading effect failed (%s) [%s:%d]", strerror(errno),__FILE__,__LINE__);
        return 0;
    }

    memset(&event,0,sizeof(event));
    event.type=EV_FF;
    event.code=effect.id;
    event.value=1;
    if (write(m_deviceHandle,&event,sizeof(event))!=sizeof(event))
    {
        ROS_ERROR("starting effect failed (%s) [%s:%d]", strerror(errno),__FILE__,__LINE__);
        return 0;
    }

    ROS_INFO("initDevice success!");
    return 1;

}

int logitech::process()
{
    double position=0.0,force=0.0, value=0;

    //ros::Rate r(10);
    while (ros::ok())
    {
        turn_deg(m_vehicleStatus_steer,position,&force);

        if(set_force_feedback_effect(force,&position)==-1)
        {
            init();
        }

        get_event_imitate_data(&position);

        //r.sleep();
        usleep(500);           //需要等待，否则出现卡顿的现象，时间不能太长否则出现Logitech方向盘左右摆动，不灵敏
        ros::spinOnce();
    }
    ROS_INFO("process end!");
    return 0;
}

void logitech::turn_deg(double value, double position, double *force)
{
    double redundancy[5]={0.01,0.02,0.03,0.04,0.3};
    double posi=value/LOGITECH_WHEEL_ANGLE;
    if(position>posi-redundancy[4]&&position<posi+redundancy[4])
    {
        if(position>posi-redundancy[3]&&position<posi+redundancy[3])
        {
            if(position>posi-redundancy[1]&&position<posi+redundancy[1])
            {
                *force=0;
            }
            else if (position>posi+redundancy[1])
            {
                *force=-0.25;
            }
            else
            {
                *force=0.25;
            }
        }
        else if (position>posi+redundancy[3])
        {
            *force=-0.5;
        }
        else
        {
            *force=0.5;
        }
    }
    else if (position>posi+redundancy[4])
    {
        *force=-1.0;
    }
    else
    {
        *force=1.0;
    }

    if(*force>1.0)
    {
        *force=1.0;
    }
    if (*force<-1.0)
    {
        *force=-1.0;
    }

}

int logitech::set_force_feedback_effect(double force, double *position)
{
    struct input_event event;
    if (0 && effect.id!=-1)
    {
        if (ioctl(m_deviceHandle,EVIOCRMFF,effect.id)<0)
        {
            ROS_ERROR("removing effect failed (%s) [%s:%d]", strerror(errno),__FILE__,__LINE__);
            return 0;
        }
        effect.id=-1;
    }

    if (force>1.0) force=1.0;
    else if (force<-1.0) force=-1.0;
    effect.u.constant.level=(short)(force*32767.0);
    effect.direction=0xC000;
    effect.u.constant.envelope.attack_level=(short)(force*32767.0);
    effect.u.constant.envelope.fade_level=(short)(force*32767.0);
    if (ioctl(m_deviceHandle,EVIOCSFF,&effect)<0)
    {
        ROS_ERROR("upload effect error!");
        return -1;
    }

    if (0 && effect.id!=-1)
    {
        memset(&event,0,sizeof(event));
        event.type=EV_FF;
        event.code=effect.id;
        event.value=1;
        if (write(m_deviceHandle,&event,sizeof(event))!=sizeof(event))
        {
            ROS_ERROR("re-starting effect failed (%s) [%s:%d]", strerror(errno),__FILE__,__LINE__);
            return 0;
        }
    }
}

int logitech::get_event_imitate_data(double *position)
{
    struct input_event event;
    struct pollfd fds[1];
    fds[0].fd = m_deviceHandle;
    fds[0].events = POLLIN;
    const int POLL_TIMEOUT = 100;    //100 ms

    while (1)
    {
        do
        {
            int retval = poll(fds, 1, POLL_TIMEOUT);
            if (retval < 0)
            {
                if (errno != EINTR)
                {
                    ROS_ERROR("poll() error: %s", strerror(errno));
                }
                return 0;
            }
            if (retval == 0)
            {
                //ROS_INFO("poll() timeout");
                return 0;
            }
            if ((fds[0].revents & POLLERR) || (fds[0].revents & POLLHUP) || (fds[0].revents & POLLNVAL))
            {
                ROS_ERROR("poll() reports error");
                return 0;
            }
        }while ((fds[0].revents & POLLIN) == 0);

        int nbytes = read(m_deviceHandle,&event,sizeof(event));

        if (nbytes < 0)
        {
            if (errno != EWOULDBLOCK)
            {
                ROS_INFO("read fail!");
                return 0;
            }

        }
        else if (nbytes == sizeof(event))
        {
            //read successful
            break;
        }

        ROS_INFO("incomplete packet read: %d", nbytes);
        usleep(500);
    }
    return processEvent(&event,position);

}

int logitech::processEvent(input_event *event,double *position)
{
    long delta_time;
    if(isfirst)
    {
        gettimeofday(&temp_time,NULL);
        gettimeofday(&current_time,NULL);
        isfirst=false;
        isfirst_data=true;
        delta_time=(current_time.tv_sec-temp_time.tv_sec)*1000000+current_time.tv_usec-temp_time.tv_usec;
    }
    else
    {
        isfirst_data=false;
        gettimeofday(&current_time,NULL);
        delta_time=(current_time.tv_sec-temp_time.tv_sec)*1000000+current_time.tv_usec-temp_time.tv_usec;
    }

    if (event->type==EV_ABS && event->code==axis_code)//方向盘数据
    {
        *position=(((double)((event->value)-axis_min))*2.0)/((axis_max-axis_min))-1.0;
        if (*position>1.0)
        {
            *position=1.0;
        }
        else if (*position<-1.0)
        {
            *position=-1.0;
        }
        temp_wheel=*position*LOGITECH_WHEEL_ANGLE;

        m_pLogitech->ShiftPaddlesR=0;
        m_pLogitech->ShiftPaddlesL=0;

        m_pLogitech->SteeringWheel=temp_wheel;
        m_pLogitech->Brake=temp_break;
        m_pLogitech->Clutch=temp_Clutch;
        m_pLogitech->SasPedal=temp_SasPedal;

        if(isfirst_data || (delta_time>=50000))
        {
            temp_time.tv_sec=current_time.tv_sec;
            temp_time.tv_usec=current_time.tv_usec;

            m_publisher_Logitech.publish(m_pLogitech);
        }
    }
    else if(event->type==EV_ABS && event->code==bxis_code)//最左边的脚蹬--离合
    {

        temp_Clutch=100-(float)event->value/255*100;

        m_pLogitech->ShiftPaddlesR=0;
        m_pLogitech->ShiftPaddlesL=0;

        m_pLogitech->SteeringWheel=temp_wheel;
        m_pLogitech->Brake=temp_break;
        m_pLogitech->Clutch=temp_Clutch;
        m_pLogitech->SasPedal=temp_SasPedal;

        if(isfirst_data || (delta_time>=8000))
        {
            temp_time.tv_sec=current_time.tv_sec;
            temp_time.tv_usec=current_time.tv_usec;

            m_publisher_Logitech.publish(m_pLogitech);
        }
    }
    else if(event->type==EV_ABS && event->code==dxis_code)//中间的脚蹬--刹车
    {
        temp_break=100-(float)event->value/255*100;

        m_pLogitech->ShiftPaddlesR=0;
        m_pLogitech->ShiftPaddlesL=0;

        m_pLogitech->SteeringWheel=temp_wheel;
        m_pLogitech->Brake=temp_break;
        m_pLogitech->Clutch=temp_Clutch;
        m_pLogitech->SasPedal=temp_SasPedal;

        if(isfirst_data || (delta_time>=8000))
        {
            temp_time.tv_sec=current_time.tv_sec;
            temp_time.tv_usec=current_time.tv_usec;

            m_publisher_Logitech.publish(m_pLogitech);
        }
    }
    else if(event->type==EV_ABS && event->code==cxis_code)//最右边的脚蹬--油门
    {
        temp_SasPedal=100-(float)event->value/255*100;

        m_pLogitech->ShiftPaddlesR=0;
        m_pLogitech->ShiftPaddlesL=0;

        m_pLogitech->SteeringWheel=temp_wheel;
        m_pLogitech->Brake=temp_break;
        m_pLogitech->Clutch=temp_Clutch;
        m_pLogitech->SasPedal=temp_SasPedal;

        if(isfirst || (delta_time>=8000))
        {
            temp_time.tv_sec=current_time.tv_sec;
            temp_time.tv_usec=current_time.tv_usec;

            m_publisher_Logitech.publish(m_pLogitech);
        }
    }
    else if(event->type==EV_ABS && event->code==16)//预留
    {
        if(event->value==-1)
        {

        }
        else if(event->value==1)
        {

        }
    }
    else if(event->type==EV_ABS && event->code==17)//预留
    {
        if(event->value==-1)
        {

        }
        else if(event->value==1)
        {

        }
    }
    else if(event->type==EV_KEY)
    {
        m_pLogitech->ShiftPaddlesR=0;
        m_pLogitech->ShiftPaddlesL=0;
       if(event->value==1)
       {
          if(event->code==291)
          {
              m_pLogitech->Ignition=1;
          }
          else if(event->code==288)
          {
              m_pLogitech->Ignition=2;
          }
          else if(event->code==289)
          {
              m_pLogitech->HandBrake=1;
          }
          else if(event->code==290)
          {
              m_pLogitech->HandBrake=2;
          }
          else if(event->code==293&&m_pLogitech->StickShift==7)//左边换挡拨片
          {
              m_pLogitech->ShiftPaddlesR=0;
              m_pLogitech->ShiftPaddlesL=1;
          }
          else if(event->code==292&&m_pLogitech->StickShift==7)//右边换挡拨片
          {
              m_pLogitech->ShiftPaddlesR=1;
              m_pLogitech->ShiftPaddlesL=0;
          }
          else if(event->code==706)
          {
              m_pLogitech->StickShift=1;//R
          }
          else if(event->code==300)
          {
              m_pLogitech->StickShift=2;//N
          }
          else if(event->code==301)
          {
              m_pLogitech->StickShift=3;//D
          }
          else if(event->code==302)
          {
              m_pLogitech->StickShift=4;//S
          }
          else if(event->code==303)
          {
              m_pLogitech->StickShift=5;//L
          }
          else if(event->code==704)
          {
              m_pLogitech->StickShift=7;//切换为拨片换挡
          }
          m_pLogitech->SteeringWheel=temp_wheel;
          m_pLogitech->Brake=temp_break;
          m_pLogitech->Clutch=temp_Clutch;
          m_pLogitech->SasPedal=temp_SasPedal;
          m_publisher_Logitech.publish(m_pLogitech);
       }
       else if(event->value==0)
       {
           if(event->code==706||event->code==300||event->code==301||event->code==302||event->code==303||event->code==704)
           {
               m_pLogitech->StickShift=6;//空挡时候发送6
               m_pLogitech->SteeringWheel=temp_wheel;
               m_pLogitech->Brake=temp_break;
               m_pLogitech->Clutch=temp_Clutch;
               m_pLogitech->SasPedal=temp_SasPedal;
               m_publisher_Logitech.publish(m_pLogitech);
           }
       }
    }
    return 1;
}

/* N S 7
 * |_|_|_
 * | | | |
 * D L   R
 */
//    ROS_INFO("type: %d, code: %d, value: %d\n", event->type, event->code, event->value);

void logitech::VehicleStatus_callback(const autonavigation::VehicleStatus::ConstPtr &_vs)
{
    if(_vs->control_status==1)  //遥控模式
    {
        m_vehicleStatus_steer=0.0;

    }
    else                        //其他模式
    {
        //ROS_INFO("recv VehicleStatus, steer: %d!", _vs->steer);
        //收到的是VehicleStatus中返回的steer(-2500~2500)，并不是逻辑方向盘实际转角
        m_vehicleStatus_steer =(double)_vs->steer/WHEEL_MAX_DEGREE*LOGITECH_WHEEL_ANGLE;
    }

}
