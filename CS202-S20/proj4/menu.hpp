/**
 * @ Name: CS 202 - Project 4
 * @ Description: menu.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/26/20
 */


#ifndef menu_hpp
#define menu_hpp

#include <iostream>

using std::cout;
using std::endl;

// Displays menu to the user and prompts user for a selection

int menu() {
    cout << "Hello! Welcome to the Wolf Pack Car Rental! " << endl;
    cout << "~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~ " << endl;
    cout << "1) Enter input file and read all data from file " << endl;
    cout << "2) Display all data to the terminal " << endl;
    cout << "3) Display all data and available cars to terminal " << endl;
    cout << "4) Reserve a car and refresh list " << endl;
    cout << "5) Exit " << endl;

    return 0;
}


#endif 
