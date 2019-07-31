#ifndef __COMMONMSG__
#define __COMMONMSG__



#include <boost/cstdint.hpp>

#define AVS_UDP_PORT 4500
#define ACC_UDP_PORT 4501
#define ACC_WIRELESS_NETMASK  0xC0A801FF    //192.168.1.255
//#define ACC_WIRELESS_NETMASK  0xC0A800FF    //192.168.0.255

#define VEHICLESTATUS "VehicleStatus"
#define CONTROLCOMMAND "ControlCommand"
#define VIDEOIMAGE1 "VideoImage1"
#define VIDEOIMAGE2 "VideoImage2"
#define VIDEOIMAGE3 "VideoImage3"
#define VIDEOIMAGE4 "VideoImage4"
#define LOGITECH "Logitech"

#define MD5_STRING_LEN 16    //md5 У��õ����ַ������ȣ��̶�Ϊ16�ֽ�

//�����ϱ���״̬�ӿ�
struct Autonavigation_Vehicle_Status
{

    boost::uint32_t     unique_key;    //������ʻ�س�Ψһ��ʶ
    boost::uint32_t     gps_week;    //GPS��
    boost::uint64_t     gps_millisecond;    //GPS����,���ܵ���㿪ʼ�ĺ�����
    double              longitude;    //���ȣ���λΪ��
    double              latitude;    //γ�ȣ���λΪ��
    boost::int64_t      gaussX;    //��˹����X
    boost::int64_t      gaussY;    //��˹����Y
    boost::int32_t      height;    //���뺣ƽ��߶�
    boost::int32_t      azimuth;    //����ǣ���λ0.01�ȣ���Ϊ0����ʱ��0��36000
    boost::int32_t      pitch;    //�����ǣ�ŷ���ǣ���λ0.01��
    boost::int32_t      roll;    //�����ǣ�ŷ���ǣ���λ0.01��
    boost::int32_t      northVelocity;    //�����ٶȣ���λcm/s
    boost::int32_t      eastVelocity;    //�����ٶȣ���λcm/s
    boost::int32_t      upVelocity;    //�����ٶȣ���λcm/s
    boost::uint32_t     travel_distance;    //T0ʱ�̿�ʼ��ǰ������̣���λ��
    boost::int32_t      remain_time;    //����T0ʱ�̻��ж���ʱ�䣬��λ����
    boost::uint32_t     time_delay;    //������ʱ����λ����
    
    boost::int16_t      steer;    //��λ0.01�ȣ�ǰ��ת�ǣ���תΪ��
    boost::uint8_t      fuel;    //ʣ���������ٷֱ�
    boost::uint8_t      shift;    //��λ
    boost::uint8_t      voltage;    //��ѹ
    boost::uint8_t      throttle;    //��ǰʹ�����������ٷֱ�
    boost::uint8_t      brake;    //��ǰʹ��ɲ�������ٷֱ�
    boost::uint8_t      engine_speed;    //��λ100ת/���ӣ�������ת��
    
    boost::uint8_t      vehicle_speed;    //��λkm/h������ʱ��
    boost::uint8_t      water_temperature;    //����ˮ��
    boost::uint8_t      control_status;    //����״̬
    boost::uint8_t      error_status;    //����״̬
    boost::uint8_t      barometer1;    //��λ0.1kpa
    boost::uint8_t      barometer2;    //��λ0.1kpa
    boost::uint8_t      handbrake;    //��ɲ״̬
    boost::uint8_t      engine_status;    //���������״̬

    boost::uint8_t      sts_mode;    //0-Ĭ��״̬, 1-md5�ļ�У����
    boost::uint8_t      controllable1;    //Bit8�������� Bit7������ Bit6��ɲ�� Bit5����λ Bit4����ɲ Bit3����� Bit2��Ϩ�� Bit1��Ԥ�� ��ӦλΪ1��ʾ�ܷ��տ��� 
    boost::uint8_t      enable;          //�ܷ�����  0����  1����
    boost::uint8_t      reserve3;
    boost::uint8_t      reserve4;
    boost::uint8_t      reserve5;
    boost::uint8_t      reserve6;
    boost::uint8_t      reserve7;

    boost::uint8_t      md5_str[MD5_STRING_LEN];    //md5�ļ�У��ֵ
    
};


//ң������ӿ�
struct Autonavigation_Control_Command
{
    boost::uint32_t     unique_key;    //������ʻ�س�Ψһ��ʶ�����������س���id
    boost::uint32_t     gps_week;    //GPS��
    boost::uint64_t     gps_millisecond;    //ȡGPS�ܵĺ��뼶ʱ��
    boost::uint64_t     cmd_millisecond;    //T0ʱ��
    boost::int16_t      cmd_steer;    //��λ0.01�ȣ�ǰ��ת�ǣ���תΪ��
    boost::uint16_t     cmd_velocity;    //�����ٶ�cm/s
    boost::int8_t       cmd_curvature;    //��λ0.005����������
    boost::uint8_t      cmd_force_start;    //����, ��ʹ��
    boost::uint8_t      cmd_task_mode;    //����ģʽĬ��ֵ0��ʲô��������1��ң��ģʽ2��������������ģʽ3:T0 ģʽ��4: �����ļ�У��
    boost::uint8_t      cmd_hand_brake;    //0���ɿ���ɲ, 1��������ɲ
    boost::uint8_t      cmd_throttle;    //����������ٷֱ�
    boost::uint8_t      cmd_brake;    //ɲ��������ٷֱ�
    boost::uint8_t      cmd_shift;    //��������,0: P, 1: R, 2: N, 3:D, 4: S, 5: L
    boost::uint8_t      cmd_ignition;    //0��Ϩ��1�����
    boost::uint8_t      cmd_light;    //�ƹ�
    boost::uint8_t      cmd_reset;    //��λ
    boost::uint8_t      cmd_reserve2;
    boost::uint8_t      cmd_reserve3;
};


//�����ļ�����
struct Autonavigation_File_Type
{
    boost::uint32_t     line_num;    //�к�
    boost::uint64_t     millisecond;    //��λ�����룬ʱ����
    boost::uint32_t     delta_distance;    //��S����λcm����ʾ����һ����֮��ľ��롣����Ϊ0����ʾ���
    double              longitude;    //���ȣ���λΪ��
    double              latitude;    //γ�ȣ���λΪ��
    boost::uint64_t     gaussX;    //��˹����X
    boost::uint64_t     gaussY;    //��˹����Y
    boost::uint8_t      expect_speed;    //��λkm/h��������ʻʱ��
    boost::uint8_t      point_type;    //���������
    
};

//���ǳ����ϱ���״̬�ӿ�,76bytes
struct Autonavigation_Satellite_Vehicle_Status
{

    boost::uint32_t     unique_key;    //������ʻ�س�Ψһ��ʶ
    boost::uint32_t     gps_week;    //GPS��
    boost::uint64_t     gps_millisecond;    //GPS����,���ܵ���㿪ʼ�ĺ�����
    double              longitude;    //���ȣ���λΪ��
    double              latitude;    //γ�ȣ���λΪ��
    boost::int64_t      gaussX;    //��˹����X
    boost::int64_t      gaussY;    //��˹����Y
    boost::int32_t      azimuth;    //����ǣ���λ0.01�ȣ���Ϊ0����ʱ��0��36000
    boost::uint32_t     travel_distance;    //T0ʱ�̿�ʼ��ǰ������̣���λ��
    boost::int32_t      remain_time;    //����T0ʱ�̻��ж���ʱ�䣬��λ����
    boost::int16_t      steer;    //��λ0.01�ȣ�ǰ��ת�ǣ���תΪ��
    boost::uint8_t      fuel;    //ʣ���������ٷֱ�
    boost::uint8_t      shift;    //��λ
    boost::uint8_t      voltage;    //��ѹ
    boost::uint8_t      throttle;    //��ǰʹ�����������ٷֱ�
    boost::uint8_t      brake;    //��ǰʹ��ɲ�������ٷֱ�
    boost::uint8_t      engine_speed;    //��λ100ת/���ӣ�������ת��  
    boost::uint8_t      vehicle_speed;    //��λkm/h������ʱ��
    boost::uint8_t      control_status;    //����״̬
    boost::uint8_t      handbrake;    //��ɲ״̬
    boost::uint8_t      engine_status;    //���������״̬ 
    boost::uint8_t      controllable1;    //Bit8�������� Bit7������ Bit6��ɲ�� Bit5����λ Bit4����ɲ Bit3����� Bit2��Ϩ�� Bit1��Ԥ�� ��ӦλΪ1��ʾ�ܷ��տ��� 
    boost::uint8_t      reserve1;         //Ԥ��
    boost::uint8_t      reserve2;
    boost::uint8_t      reserve3;

};


//����ң������ӿ�,40bytes
struct Autonavigation_Satellite_Command
{
    boost::uint32_t     unique_key;    //������ʻ�س�Ψһ��ʶ�����������س���id
    boost::uint32_t     gps_week;    //GPS��
    boost::uint64_t     gps_millisecond;    //ȡGPS�ܵĺ��뼶ʱ��
    boost::uint64_t     cmd_millisecond;    //T0ʱ��
    boost::uint8_t      cmd_priority;    //����Ȩ��0-������ȼ�����������Ӧ�����1-���̨���ȼ���ͬ��2-���ڵ�̨���ȼ�
    boost::uint8_t      cmd_task_mode;    //����ģʽĬ��ֵ0��ʲô��������1��ң��ģʽ2��������������ģʽ3:T0 ģʽ
    boost::uint8_t      cmd_hand_brake;    //0���ɿ���ɲ, 1��������ɲ
    boost::uint8_t      cmd_throttle;    //����������ٷֱ�
    boost::uint8_t      cmd_brake;    //ɲ��������ٷֱ�
    boost::uint8_t      cmd_shift;    //��������,0: P, 1: R, 2: N, 3:D, 4: S, 5: L
    boost::uint8_t      cmd_ignition;    //0��Ϩ��1�����
    boost::uint8_t      cmd_light;    //�ƹ�
    boost::uint8_t      cmd_reserve1;    //Ԥ��
    boost::uint8_t      cmd_reserve2;
    boost::uint8_t      cmd_reserve3;
    boost::uint8_t      cmd_reserve4;
    boost::uint8_t      cmd_reserve5;
    boost::uint8_t      cmd_reserve6;
    boost::uint8_t      cmd_reserve7;
    boost::uint8_t      cmd_reserve8;
    
};
#endif
