/**
 * @ Name: CS 202 - Project 4
 * @ Description: Sensor.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/26/20
 */

#ifndef sensor_hpp
#define sensor_hpp

#include <iostream>

using namespace std;

const float SENSOR_COST_GPS = 5.0;
const float SENSOR_COST_CAMERA = 10.0;
const float SENSOR_COST_LIDAR = 15.0;
const float SENSOR_COST_RADAR = 20.0;
const float SENSOR_COST_NONE = 0.0;

class Sensor {

public:
    // Constructors
    Sensor();                       // Default
    Sensor(const char * type);      // Parameterized
    Sensor(const Sensor & sensor);  // Copy

    // Get Functions
    char * getType();
    float getExtraCost();

    // Set Functions
    void setType(const char * type);
    void setExtraCost(const float extracost);

    // Static Get Functions
    static int getGPSCnt();
    static int getCameraCnt();
    static int getLidarCnt();
    static int getRadarCnt();

    // Static Re-set Functions
    static void resetGPSCnt();
    static void resetCameraCnt();
    static void resetLidarCnt();
    static void resetRadarCnt();

    // Operator overload
    friend ostream & operator<<(ostream & os, const Sensor & sensor);

protected:

private:
    char m_type[256];
    float m_extracost;
    static int gps_cnt;
    static int camera_cnt;
    static int lidar_cnt;
    static int radar_cnt;

};

bool operator == (Sensor & s1, Sensor & s2);


#endif 
