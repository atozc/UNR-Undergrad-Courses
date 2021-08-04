/**
 * @ Name: CS 202 - Project 5
 * @ Desciption: Vehicle.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 3/4/20
 */

#include <iostream>
#ifndef VEHICLE_HPP
#define VEHICLE_HPP

using namespace std; 

class Vehicle {

    friend std::ostream & operator<<(std::ostream & os, const Vehicle & vehicle);

public:
    // Constructors
    Vehicle();
    Vehicle(const int vin, const float *lla);
    Vehicle(const Vehicle &vehicle);

    // Destructor
    ~Vehicle();

    // Operator overload
    Vehicle &operator=(const Vehicle &rhs);

    // Get Functions
    const float *getLLA() const;
    int getVIN() const;
    static int getIdgen();

    // Set Functions
    void setLLA(const float *lla);
    void setLLA(const int lat, const int lng, const int alt);

    void move(const float *lla);

    static bool validateVIN(const int vin);

protected:
    float m_lla[3];
    const int m_vin;

private:
    static int s_idgen;
};


#endif

