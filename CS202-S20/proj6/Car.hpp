/**
* @ Name: CS 202 - Project 6
* @ Desciption: Car.hpp
* @ Author: Crystal Atoz
* @ Date Last Modified: 3/4/20
*/

#ifndef Car_hpp
#define Car_hpp

#include <iostream>
#include "Vehicle.hpp"

using namespace std;

class Car : public Vehicle {
public:
    Car();
    Car(const float *lla);
    Car(const Car &c);

    virtual ~Car();

    Car &operator=(const Car &other);

    const int getThrottle() const;
    void setThrottle(const int throttle);

    void drive(const int throttle);
    virtual void Move(const float *lla);

private:
    int m_throttle;
};

#endif 
