/**
 * @ Name: CS 202 - Project 5
 * @ Desciption: Car.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 3/4/20
 */

#ifndef CAR_HPP
#define CAR_HPP

#include <iostream> 
#include "Vehicle.hpp"
#include <cstring>

const int DEFAULT_THROTTLE = 0;

class Car : public Vehicle {

    friend std::ostream &operator<<(std::ostream &os, const Car &car);

public:
    // Constructors
    Car();
    Car(const char *license, const int vin, const float *lla);
    Car(const Car &car);

    // Destructor
    ~Car();

    // Operator overload
    Car &operator=(const Car &rhs);

    // Get Functions
    const char *getPlates() const;
    int getThrottle() const;

    // Set Functions
    void setPlates(const char *plates);
    void setThrottle(const int throttle);

    // Other Functions
    void drive(const int throttle);
    void move(const float *lla);

private:
    char m_plates[256];
    int m_throttle;

};


#endif 
