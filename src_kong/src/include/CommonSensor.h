/************************************************************************/
/*                                                                                                                          */
/*                                      ��������                                                             */
/*                                                                                                                          */
/*                                                                                                                          */
/************************************************************************/
    
#ifndef __COMMONSENSOR__
#define __COMMONSENSOR__

#include "CommonDefinition.h"

#include <boost/algorithm/string.hpp>


//��������ϵ����:����ǰ��Ϊx�����ұ�Ϊy
//
//
//
//
//
//
//
//
//
//

#define VLP16_LINENUM 16    //16����
#define VLP16_POINTNUM 2000    //ÿ���ߵ�������
#define VLP16_PACKAGENUM 200    //stronggest 754, last 754, dual 1508 packages/second

//******************************************//
//
//
//
//                      ����������
//
//
//
//******************************************//

#define SensorSimulatePort 4000    //�ɼ�������������udp�˿ں�
#define PublicNetMask 0xAC1764FF    ////172.23.100.255


#define GLOBALPOSE_FILE_PREFIX  "globalpose"
#define LOCALPOSE_FILE_PREFIX "localpose"
#define VLP16DATA_FILE_PREFIX "vlp16data"
#define VLP16SCAN_FILE_PREFIX "vlp16scan"


enum SIMULATE_TYPE
{
    Do_Nothing = 0,
    Save_Data,
    Load_Data,
    Load_Start,
    Load_Pause,
    Load_Forward,
    Load_BackWard,
    Wait_Cmd
};


struct SensorSimulationCmd
{
    UINT8 Cmd_SimulateType;    //0 do nothing, 1 save data, 2 load data, 3 load start, 4 load pause,5 load_forward, 6 load backward
    UINT8 Cmd_NewSave;    //0 do nothing, 1 start a new folder

    UINT8 Cmd_ColorImage;    //0 do nothing ,1 save , 2 load
    UINT8 Cmd_Ladar16;
    UINT8 Cmd_Ladar8;
    UINT8 Cmd_Radar;
    UINT8 Cmd_LoadPath[100];

    SensorSimulationCmd()
    {
        reset();
    }
    
    void reset()
    {
        memset(this, 0, sizeof(SensorSimulationCmd));
    }

    
};

#define PCAN_MSG_LEN 13


//λ��
typedef union 
{
    struct BYTE
    {
		UINT8 Bit1:1;
		UINT8 Bit2:1;
		UINT8 Bit3:1;
		UINT8 Bit4:1;
		UINT8 Bit5:1;
		UINT8 Bit6:1;
		UINT8 Bit7:1;
		UINT8 Bit8:1;
    }Bits;
    UINT8 Byte;
}A_Byte;


//����can����ʱ�����Ŀ��ֵ���з��ŵ����ݣ�����������Чλ�����ж�
//Ȼ��������ݳ��Ȳ���ʣ�µ�λ��
//��Ч���ݳ��Ⱥ�ȡ����չ�ϵ��
//length:                |=                   2���ֽ�
//        9                0xFE00
//        10              0xFC00
//        11              0xF800
//        12              0xF000
//        13              0xE000
//        14              0xC000
//        15              0x8000

//length:                |=                   1���ֽ�
//        2              0xFC
//        3              0xF8
//        4              0xF0
//        5              0xE0
//        6              0xC0
//        7              0x80

typedef union
{
    UINT16 unsigned_16;
    INT16  signed_16;
    A_Byte unsigned_8[2];
}Cast8_16;

typedef struct
{
    UINT16 ID;
    UINT8  MSGTYPE;
    UINT8  LEN;
    UINT8  DATA[8];
}PcanMsg;


#endif

