/**
 * @ Name: CS 202 - Project 4
 * @ Description: Agency.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/26/20
 */


#include <fstream>

#include "Agency.hpp"
#include "my_string.hpp"


using namespace std;

// Default constructor
Agency::Agency() :
    m_zipcode(DEFAULT_ZIPCODE)
{
}

// Get Functions
const char* Agency::getName() const {
    return m_name;
}

const int Agency::getZipcode() const {
    return m_zipcode;
}

// Set Functions
void Agency::setName(const char* name) {
    myStringCopy(m_name, name);
}

// Operator overload
Car & Agency::operator[](int i) {
    return m_inventory[i];
}

// Other Functions
void Agency::readIn() {
    ifstream inf;
    char filename[256];

    cout << "Infile name: ";
    cin >> filename;

    inf.open(filename);
    if (inf) {
        inf >> *this;
    } else {
        cerr << "Unable to open file " << filename << endl;
    }

    inf.close();
}

void Agency::printAll() {
    cout << *this;
}

void Agency::reserveOne() {
    char sensorType[256];
    int sensorCount = 0, gpsCount = 0, cameraCount = 0, lidarCount = 0, radarCount = 0;
    Car * inventory_ptr = m_inventory;
    Sensor * sensors_ptr;

    for (int i = 0; i < 5; i++,  inventory_ptr++) {      // For Each Car

        sensors_ptr = inventory_ptr->getSensors();

        for (int j = 0; j < inventory_ptr->getSensorCount(); j++, sensors_ptr++) {   // For Each Sensor

            // Track total number of sensors in inventory
            sensorCount++;

            // Track number of each type of sensor a
            myStringCopy(sensorType, sensors_ptr->getType());
            if (!myStringCompare(sensorType, "gps")) {
                gpsCount++;
            } else if (!myStringCompare(sensorType, "camera")) {
                cameraCount++;
            } else if (!myStringCompare(sensorType, "lidar")) {
                lidarCount++;
            } else if (!myStringCompare(sensorType, "radar")) {
                radarCount++;
            }
        }
    }

    cout << "Total Sensors: " << sensorCount << endl;
    cout << "GPS: " << gpsCount << " | " << "Camera: " << cameraCount << " | " << "Lidar: " << lidarCount << " | "
         << "Radar: " << radarCount << endl;
}


void Agency::printFiltered() {
    Car * inventory_ptr = m_inventory;

    cout << "Available cars: " << endl;
    for (int i = 0; i < 5; i++, inventory_ptr++) {
        if (inventory_ptr->getAvailable()) {
            cout << *inventory_ptr << endl;
        }
    }
}

// Friends
std::istream& operator>>(std::istream& is, Agency& agency) {
    is >> agency.m_name >> agency.m_zipcode;

    for (int i = 0; i < 5; i++) {
        is >> agency[i];
    }
    return is;
}

std::ostream & operator<<(std::ostream & os, Agency & agency) {
    os << agency.m_name << " " << agency.m_zipcode << endl;

    for (int i = 0; i < 5; i++) {
        os << agency[i] << endl;
    }

    return os;
}
