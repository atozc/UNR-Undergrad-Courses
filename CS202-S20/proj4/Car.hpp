/**
 * @ Name: CS 202 - Project 4
 * @ Description: Car.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/26/20
 */


#ifndef car_hpp
#define car_hpp

#include <iostream>

#include "Sensor.hpp"

using namespace std;


class Car {

    friend std::istream& operator>>(std::istream& is, Car& car);

public:
    // Constructors
    Car(); // Default
    Car(const char *make, const char *model, const int year, const float baseprice, const bool available,
        Sensor *sensors); // Parameterized
    Car(Car & car); // Copy

    // Get Functions
    char * getMake();
    char * getModel();
    int getYear();
    Sensor * getSensors();
    float getBasePrice();
    float getFinalPrice();
    bool getAvailable();
    char * getOwner();
    int getSensorCount();

    // Set Functions
    void setMake(const char * make);
    void setModel(const char * model);
    void setYear(const int year);
    void setBasePrice(const float baseprice);
    void setAvailable(const bool available);
    void setOwner(const char * owner);

    // Operator overload
    Car& operator+(Sensor & sensor);
    Car& operator+(const char * owner);
    friend ostream & operator<<(ostream & os, const Car & car);

    // Other Functions
    float updatePrice();
    void print();
    float estimateCost(const int days);
    void promptRent();
    void rent();

private:
    char m_make[256];
    char m_model[256];
    int m_year;
    Sensor m_sensors[3];
    float m_baseprice;
    float m_finalprice;
    bool m_available;
    char m_owner[256];
    int m_sensorCount;
};


#endif 
