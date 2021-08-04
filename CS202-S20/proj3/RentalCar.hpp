/**
 * @ Name: CS 202 - Project 3
 * @ Description: RentalCar.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/12/20
 */

#ifndef RentalCar_hpp
#define RentalCar_hpp
#include "RentalCar.hpp"
#include <iostream>

class RentalCar {
    
    public:
        // Constructors
        RentalCar();
        RentalCar(int year, const char* make, const char* model, float price, bool available);

    // Get Functions
    int getYear() const;
    char* getMake();
    char* getModel();
    float getPrice() const;
    bool getAvailable() const;

    // Set Functions
    void setYear(int year);
    void setMake(char* make);
    void setModel(char* model);
    void setPrice(float price);
    void setAvailable(bool available);

    // Other
    void print() const;
    void estimateCost(int days) const;

    private:
        int m_year;
        char m_make[256];
        char m_model[256];
        float m_price;
        bool m_available;
};


#endif 






