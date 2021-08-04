/**
 * @ Name: CS 202 - Project 3
 * @ Description: RentalCar.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/12/20
 */

#include "RentalCar.hpp"
#include "my_string.hpp"
#include "Agency.h"
#include <iostream>

using std::endl;
using std::cout;
using std::boolalpha;

char * myStringCopy(char *destination, const char *source);

RentalCar::RentalCar() {
    m_year = -1;
    myStringCopy(m_make, "NO MAKE");
    myStringCopy(m_model, "NO MODEL");
    m_price = 0;
    m_available = false;
}

RentalCar::RentalCar(int year, const char *make, const char *model, float price, bool available) {
    m_year = year;
    myStringCopy(m_make, make);
    myStringCopy(m_model, model);
    m_price = price;
    m_available = available;
}

// Get Functions
int RentalCar::getYear() const {
    return m_year;
}

char *RentalCar::getMake() {
    return m_make;
}

char *RentalCar::getModel() {
    return m_model;
}

float RentalCar::getPrice() const {
    return m_price;
}

bool RentalCar::getAvailable() const {
    return m_available;
}

// Set Functions
void RentalCar::setYear(int year) {
    m_year = year;
}

void RentalCar::setMake(char *make) {
    myStringCopy(m_make, make);
}

void RentalCar::setModel(char *model) {
    myStringCopy(m_model, model);
}

void RentalCar::setPrice(float price) {
    m_price = price;
}

void RentalCar::setAvailable(bool available) {
    m_available = available;
}

// Other
void RentalCar::print() const {
    cout << m_year << " " << m_make << " " << m_model << ", Price: $" << m_price << ", Available: " << boolalpha
         << m_available << endl;
}

void RentalCar::estimateCost(int days) const {
    cout << "Estimated cost to rent the " << m_make << " " << m_model << " for " << days << " days: $" << m_price * days
         << endl;
}
