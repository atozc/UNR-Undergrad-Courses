/**
 * @ Name: CS 202 - Project 3
 * @ Description: proj3.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/11/20
 */

#include <iostream>
#include "menu.hpp"
#include "Agency.h"
#include "menu.cpp"
#include "my_string.hpp"


using std::cout;
using std::endl;
using std::ifstream;

int main() {

    int selection;
    bool exit = false;
    RentalAgency agencies[agenciesInFile];
    ifstream infile;
    
    cout << "Hello! Welcome to Wolf Pack Car Rental! " << endl;
    cout << "--------------------------------------- " << endl;

    do {
        selection = menu();
        switch (selection) {
        case 1: readCars(agencies); break;
        case 2: printAgenciesToTerminal(agencies); break;
        case 3: estimateRentalCost(agencies); break;
        case 4: findCheapestRental(agencies); break;
        case 5: reserveCar(agencies); break;
        case 6: exit = true; break;
        default: cout << "I'm sorry, please enter a number 1-6 " << endl;
        }
    } while (!exit);

    return 0;
}
