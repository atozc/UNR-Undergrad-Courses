/**
 * @ Name: CS 202 - Project 4
 * @ Description: Agency.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/26/20
 */

#ifndef AGENCY_HPP
#define AGENCY_HPP

#include "Car.hpp"


const int DEFAULT_ZIPCODE = 00000;


class Agency {

    friend std::istream & operator>>(std::istream& is, Agency& agency);
    friend std::ostream & operator<<(std::ostream & os, Agency & agency);

    public:
        Agency(); // Default

        // Get Functions
        const char* getName() const;
        const int getZipcode() const;

        // Set Functions
        void setName(const char* name);

        // Operator overload
        Car & operator[](int i);

        // Other Functions 
        void readIn();
        void printAll();
        void printFiltered();
        void reserveOne();


    private:
        char m_name[256];
        int m_zipcode;
        Car m_inventory[5];

};


#endif
