#ifndef HEAD_H
#define HEAD_H
#include <stdio.h>
#include <ros/ros.h>

struct File_Type
{
    boost::uint32_t     line_num;
    boost::uint64_t     millisecond;
    boost::uint32_t     delta_distance;
    double              longitude;
    double              latitude;
    boost::int64_t     gaussX;
    boost::int64_t     gaussY;
    boost::uint8_t      expect_speed;
    boost::uint8_t      point_type;

};
#endif // HEAD_H
