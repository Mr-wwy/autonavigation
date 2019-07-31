#ifndef __AUTONGMSG__
#define __AUTONGMSG__

#include "CommonDefinition.h"



//�ṹ�嶨�����һ���ڴ���������
//���ֱ��ʹ��fwrite��ṹ�����ݵĻ����ᵼ��һ���Ŀռ��˷�
//
namespace autonavigation
{

#define ATTRIBUTEMAP_WIDTH (250)
#define ATTRIBUTEMAP_HEIGHT (500)

typedef std::map<std::string, std::string> M_string;

//������֪���
struct LocalAttributeMap
{
    INT32    mapWidth;
    INT32    mapHeight;
    INT32    gridWidth;
    INT32    gridHeight;
    INT32    vehicleGridX;
    INT32    vehicleGridY;

    UINT8    obstacles[ATTRIBUTEMAP_WIDTH*ATTRIBUTEMAP_HEIGHT];
};


#define BASE_GAUSS_X (0)
#define BASE_GAUSS_Y (0) 
//�߾���ȫ�ֶ�λ���
struct GlobalPosition
{
    double gps_millsecond;
    double longitude;
    double laltitude;
    double gaussX;
    double gaussY;
    double height;

    INT32  azimuth;
    INT32  pitch;
    INT32  roll;

    INT32  northVelocity;
    INT32  eastVelocity;
    INT32  upVelocity;
    
};

//�����˶���Ϣ
struct LocalPose
{
    double lp_millsecond;
    INT32  dr_x;
    INT32  dr_y;
    INT32  dr_z;

    INT32  dr_heading;
    INT32  dr_roll;
    INT32  dr_pitch;

    INT32  lf_speed;    //cm/s
    INT32  rf_speed;
    INT32  lr_speed;
    INT32  rr_speed;

    UINT8  steer;    //0~100
    UINT8  brake;    //0~100
    UINT8  fuel;    //0~100
};

//�ֲ�·���滮���
struct WayPoint
{
    INT32 x;
    INT32 y;
    INT32 z;
};

struct LocalCoordinate
{
    INT32 z_x;
    INT32 z_y;
    INT32 g_x;
    INT32 g_y;
    INT32 heading;
    INT32 pitch;
    INT32 roll;
    INT32 height;
};

struct PathProperty
{
    WayPoint left_boundary;
    WayPoint right_boundary;
    INT32 direction;
};

struct LocalPath
{
    UINT16 effective_point_num;    //�ֲ�·���滮����Ч����Ŀ
    LocalCoordinate plan_coordinate;
    UINT8  plan_output_mode;    //0--���·��,1-��������ٶȺ�����
    UINT16 plan_point_num;    //�滮����Ч����
    WayPoint path[150];
    PathProperty property[150];
    UINT8 vehicle_command;
    INT32 speed;
    double exp_velocity;    //�����ٶ�
    double exp_curvature;    //��������
    
};


//

}

#endif