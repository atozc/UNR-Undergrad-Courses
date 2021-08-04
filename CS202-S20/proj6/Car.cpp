/**
* @ Name: CS 202 - Project 6
* @ Desciption: Car.cpp
* @ Author: Crystal Atoz
* @ Date Last Modified: 3/4/20
*/

#include <iostream>
#include "Car.hpp"

using namespace std;

/**
 * @ description Default constructor for Car class
 */
Car::Car() {
    std::cout << "Car: Default-ctor" << std::endl;
    setThrottle(0);
}

/**
 * @ description Parameterized constructor for Car class
 * @ param lla const float *
 */
Car::Car(const float *lla) : Vehicle(lla) {
    std::cout << "Car: Parameterized-ctor" << std::endl;
    setThrottle(0);
}

/**
 * @ description Copy constructor for Car class
 * @ param c const Car reference
 */
Car::Car(const Car &c) {
    std::cout << "Car: Copy-ctor" << std::endl;
    setThrottle(c.m_throttle);
    SetLLA(c.GetLLA());
}

/**
 * @ description Virtual destructor for Car class
 */
Car::~Car() {
    std::cout << "Car: Dtor" << std::endl;
}

/**
 * @ description Assignment operator overload for Vehicle class
 * @ param other const Vehicle reference
 * @ return Vehicle reference
 */
Car &Car::operator=(const Car &other) {
    std::cout << "Car: Assignment" << std::endl;
    if (this != &other) {
        SetLLA(other.GetLLA());
        setThrottle(other.m_throttle);
    }
    return *this;
}

/**
 * @ description Get car's throttle member
 * @ return const int
 */
const int Car::getThrottle() const {
    return m_throttle;
}

/**
 * @ description Set car's thottle member
 * @ param throttle const int
 */
void Car::setThrottle(const int throttle) {
    m_throttle = throttle;
}

/**
 * @ description Begin driving by setting m_throttle to throttle
 * @ param throttle const int
 */
void Car::drive(const int throttle) {
    setThrottle(throttle);
}

void Car::Move(const float *lla) {
    std::cout << "Car: DRIVE to destination, with throttle @ 75" << std::endl;
    drive(75);
}
