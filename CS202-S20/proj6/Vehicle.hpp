/**
* @ Name: CS 202 - Project 6
* @ Desciption: Vehicle.hpp
* @ Author: Crystal Atoz
* @ Date Last Modified: 3/4/20
*/

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <iostream>

using namespace std;

const int LLA_LEN = 3;

class Vehicle {

    friend std::ostream &operator<<(std::ostream &os, Vehicle &v);

public:
    Vehicle();
    Vehicle(const float *lla);
    Vehicle(const Vehicle &v);

    virtual ~Vehicle();

    Vehicle &operator=(const Vehicle &other);

    const float *GetLLA() const;
    void SetLLA(const float *lla);

    virtual void Move(const float *lla) = 0;
    virtual void serialize(std::ostream& os);

private:
    float m_lla[LLA_LEN];
};

/* HELPERS */
void arrayCopy(float * dest, const float * src, const int len);
void arrayPrint(std::ostream &os, const float * arr, const int len);

#endif
