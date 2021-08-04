/**
 * @ Name: CS 202 - Project 3
 * @ Description: menu.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/12/20
 */


#ifndef menu_hpp
#define menu_hpp
#include "Agency.h"
#include <iostream>

//Function Prototypes
void userMenuPrompt();
void readCars(RentalAgency * agencies);
void printAgenciesToTerminal(RentalAgency * agencies);
void estimateRentalCost(RentalAgency * agencies);
void findCheapestRental(RentalAgency * agencies);
void reserveCar(RentalAgency * agencies);
int findIntBetween(int min, int max);

#endif
