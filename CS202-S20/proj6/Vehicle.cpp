/**
* @ Name: CS 202 - Project 6
* @ Desciption: Vehicle.cpp
* @ Author: Crystal Atoz
* @ Date Last Modified: 3/6/20
*/

#include <iostream>
#include "Vehicle.hpp"

using namespace std;

/**
 * @ description Default constructor for Vehicle class
 */
Vehicle::Vehicle() {
    std::cout << "Vehicle:Default-ctor" << std::endl;
}

/**
 * @ description Parameterized constructor for Vehicle class
 * @ param lla const float
 */
Vehicle::Vehicle(const float *lla) {
    std::cout << "Vehicle:Parameterized-ctor" << std::endl;
    SetLLA(lla);
}

/**
 * @ description Copy constructor for Vehicle class
 * @param v const Vehicle reference
 */
Vehicle::Vehicle(const Vehicle &v) {
    std::cout << "Vehicle:Copy-ctor" << std::endl;
    SetLLA(v.m_lla);
}

/**
 * @ description Virtual destructor for Vehicle class
 */
Vehicle::~Vehicle() {
    std::cout << "Vehicle: Dtor" << std::endl;
}

/**
 * @ description Assignment operator overload for Vehicle class
 * @ param other const Vehicle reference"
 * @ return Vehicle reference
 */
Vehicle &Vehicle::operator=(const Vehicle &other) {
    std::cout << "Vehicle: Assignment" << std::endl;
    if (this != &other) {
        SetLLA(other.m_lla);
    }
    return *this;
}

/**
 * @ description Get vehicle's m_lla member
 * @ return const float *
 */
const float *Vehicle::GetLLA() const {
    return m_lla;
}

/**
 * @ description Set vehicle's m_lla member
 * @ param lla const float *
 */
void Vehicle::SetLLA(const float *lla) {
    arrayCopy(m_lla, lla, LLA_LEN);
}

/**
 * @ description Print Vehicle's data
 * @ param os std::ostream reference
 */
void Vehicle::serialize(std::ostream &os) {
    os << "Vehicle @ [";
    arrayPrint(os, m_lla, LLA_LEN);
    os << "]" << std::endl;
}

/**
 * @ description Call Vehicle v's serialize method
 * @ param os std::ostream reference
 * @ param v Vehicle reference
 */
std::ostream &operator<<(std::ostream &os, Vehicle &v) {
    v.serialize(os);
    return os;
}

/**
 * @ description Copy src into float by len
 * @ param dest float *
 * @ param src const float *
 * @ param len const int
 */
void arrayCopy(float * dest, const float * src, const int len) {
    for (int i = 0; i < len; i++) {
        *dest++ = *src++;
    }
}

/**
 * @ description Print a comma-delimited list of arr members to os
 * @ param os std::ostream reference
 * @ param arr const float *
 * @ param len const int
 */
void arrayPrint(std::ostream &os, const float * arr, const int len) {
    for (int i = 0; i < len; i++) {
        os << arr[i];
        if (i != len -1) {
            os << ", ";
        }
    }
}
