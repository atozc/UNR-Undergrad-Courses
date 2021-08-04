/**
 * @ Name: CS 202 - Project 5
 * @ Desciption: Vehicle.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 3/4/20
 */
#include <iostream>
#include "Vehicle.hpp"

using namespace std; 

int Vehicle::s_idgen = 0;

/**
 * @ Description Default constructor for Vehicle
 * @ param
 * @ param
 * @ pre
 * @ post
 * @ return
 */
Vehicle::Vehicle() : m_vin(s_idgen++) {
    std::cout << "Vehicle #" << m_vin << ": Default-ctor" << std::endl;
}


/**
 * @ Description Parameterized constructor for Vehicle
 * @ param const int vin
 * @ param const float lla array
 * @ pre
 * @ post
 * @ return
 */
Vehicle::Vehicle(const int vin, const float *lla) : m_vin(validateVIN(vin) ? vin : s_idgen++) {
    std::cout << "Vehicle #" << m_vin << ": Parameterized-ctor" << std::endl;
    setLLA(lla);
}


/**
 * @Description Copy constructor for Vehicle
 * @ param
 * @ param Vehicle object to copy
 * @ pre
 * @ post
 * @ return
 */
Vehicle::Vehicle(const Vehicle &vehicle) : m_vin(s_idgen++) {
    std::cout << "Vehicle #" << m_vin << ": Copy-ctor" << std::endl;
    setLLA(vehicle.m_lla);
}

/**
 * @ Description Deconstructor for Vehicle
 * @ pre
 * @ post
 * @ return
 */
Vehicle::~Vehicle() {
    std::cout << "Vehicle #" << m_vin << ": Dtor" << std::endl;
}

/**
 * @Description Assignment operator overload for Vehicle
 * @ param rhs Vehicle object to assign
 * @ pre
 * @ post
 * @ return Vehicle object
 */
Vehicle &Vehicle::operator=(const Vehicle &rhs) {
    std::cout << "Vehicle #" << m_vin << ": Assignment" << std::endl;
    if (this != &rhs) {
        setLLA(rhs.m_lla);
    }
    return *this;
}

/**
 * @Description Get Vehicle's m_lla property
 * @ pre
 * @ post
 * @ return float array m_lla
 */
const float *Vehicle::getLLA() const {
    return m_lla;
}

/**
 * @Description Get Vehicle's m_vin property
 * @ pre
 * @ post
 * @ return Const int vin number
 */
int Vehicle::getVIN() const {
    return m_vin;
}


/**
 * @ Description Get Vehicle class's s_idgen property
 * @ pre
 * @ post
 * @ return Static int for if generation
 */
int Vehicle::getIdgen() {
    return s_idgen;
}

/**
 * @ Description Check if vin is valid for assignment as a vehicle's m_vin property
 * @ param const int vin represetning the vin number to check for validity
 * @ pre
 * @ post
 * @ return Boolean true if valid, else, false
 */
bool Vehicle::validateVIN(const int vin) {

    if (vin >= s_idgen) {
        s_idgen = vin;
        s_idgen++;
        return true;
    }
    return false;
}

/**
 * @ Description Set vehicle's m_lla property
 * @ param lla float array
 * @ pre
 * @ post
 * @ return Void
 */
void Vehicle::setLLA(const float *lla) {
    for (int i = 0; i < 3; i++) {
        m_lla[i] = lla[i];
    }
}

/**
 * @ Description Set vehicle's m_lla property using discrete values
 * @ param const int lat (latitude)
 * @ param const int lng (longitude)
 * @ param const int alt (altitude)
 * @ pre
 * @ post
 * @ return Void
 */
void Vehicle::setLLA(const int lat, const int lng, const int alt) {
    m_lla[0] = lat;
    m_lla[1] = lng;
    m_lla[2] = alt;
}

/**
 * @ Description Base class Move function
 * @ param lla float array
 * @ pre
 * @ post
 * @ return Void
 */
void Vehicle::move(const float *lla) {
    std::cout << "Vehicle #" << m_vin << ": CANNOT MOVE - I DON'T KNOW HOW" << std::endl;
}

/**
 * @ Description Insertion operator overload for custom object output
 * @ param os output stream
 * @ param const Vehicle object
 * @ pre
 * @ post
 * @ return os output stream
 */
std::ostream &operator<<(std::ostream &os, const Vehicle &vehicle) {
    std::cout << "Vehicle #" << vehicle.m_vin << " @ [" << vehicle.m_lla[0] << ", " << vehicle.m_lla[1] << ", " << vehicle.m_lla[2] << "]"
              << std::endl;
    return os;
}
