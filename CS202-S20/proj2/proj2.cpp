/**
 * @ Name: CS 202 - Project 2
 * @ Description: proj2.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/5/20
 */

#include <iostream>
#include <fstream>
#include "proj2.hpp"
#include "my_string.hpp" 
#include "menu.hpp"

using namespace std;

const int cars_InFile = 5;

// Main Function
int main() {
        
    int selection;
    bool exit = false;
    Car cars[5];

    do {
        selection = menu();
        switch (selection) {
        case 1: readCars(cars); break;
        case 2: printCarsToTerminal(cars); break;
        case 3: printCarsToFile(cars); break;
        case 4: sortCarsByPrice(cars); break;
        case 5: rentalCarQuery(cars); break;
        case 6: rentalCarReserve (cars); break;
        case 7: exit = true; break;
        default: cout << "Error Detected. " << endl;
                
        }
        } while (!exit);

        return 0;
}
   
// Displays the Menu to the user
      int menu()
      {
          cout << "Menu: Please select from the following options: " << endl;
          cout << "(1) Enter in a input file and read cars from file " << endl;
          cout << "(2) Show car data to the screen " << endl;
          cout << "(3) Print car date to seperate output file " << endl;
          cout << "(4) Sort car data by ascending price " << endl;
          cout << "(5) Show available cars for user-entered amount of days " << endl;
          cout << "(6) Rent a car (by how many rental days) " << endl;
          cout << "(7) Exit menu" << endl;

          return get_IntBetween(1, 7);
      }

