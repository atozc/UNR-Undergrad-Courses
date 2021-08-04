/**
 * @ Name: CS 202 - Project 4
 * @ Description: my_string.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/26/20
 */

#include <iostream>
#include <fstream>
#include "Sensor.hpp"
#include "Car.hpp"
#include "Agency.hpp"
#include "menu.hpp"

using namespace std;

// Prototypes

int main() {
    Agency agency;
    ifstream inf;
    bool exit = false;
    int selection;

    do {
        selection = menu();
        switch (selection) {
            case 1: agency.readIn(); break;
            case 2: agency.printAll(); break;
            case 3: agency.printFiltered(); break;
            case 4: agency.reserveOne(); break;
            case 5: exit = true; break;
            default: cout << "Error Detected. Please select 1-5" << endl;
        }
    } while (!exit);

    return 0;
}


