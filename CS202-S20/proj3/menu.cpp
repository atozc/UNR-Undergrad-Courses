/**
 * @ Name: CS 202 - Project 3
 * @ Description: menu.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/11/20
 */

#include "menu.hpp"
#include "my_string.hpp"
#include "RentalCar.hpp"
#include "RentalCar.cpp"
#include "Agency.h"
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::cerr;
using std::endl;
using std::ifstream;
using std::boolalpha;



/* Description Prompts the menu to the user
 * @param NONE
 * @param NONE
 * @pre NONE
 * @post Displays all menu options to the user
 * @return findIntBetween function
 */
int menu() {

    cout << "Menu: Please select from the following options: " << endl;
    cout << "(1) Please enter a input file to read from: " << endl;
    cout << "(2) Display all car and agency data to the screen " << endl;
    cout << "(3) Estimate rental car cost (Please enter: agency, car number, number of days to rent): " << endl;
    cout << "(4) Show the cheapest car available " << endl;
    cout << "(5) Reserve car and refresh list " << endl;
    cout << "(6) Exit Menu " << endl;
    
    return findIntBetween(1,6);
}

/* Description Reads from an input file
 * @param RentalAgency
 * @param * agencies
 * @pre takes in file
 * @post reads cars from input file
 * @return NONE
 */
void readCars(RentalAgency * agencies) {
    
    RentalCar car;
    char filename[100];
    ifstream infile;
    cout << "Please enter an input filename: ";
    cin >> filename;
    infile.open(filename);
    infile.close();
    cout << endl;
        for (int i = 0; i < agenciesInFile; i++) {
            cout << car.getYear() << " " << car.getMake() << " " << car.getModel() << ", $" << car.getPrice() << " per day, Available: " << boolalpha << car.getAvailable() << endl;
    }
    cout << endl;

}

/* Description Prints all agencies from file to terminal
 * @param RentalAgency
 * @param * agencies
 * @pre
 * @post Terminal displays agencies in file
 * @return NONE
 */
void printAgenciesToTerminal(RentalAgency * agencies) {
   
    RentalAgency agency;
    int *arrayPointer = agency.zipcode;
    RentalCar *inventory = nullptr;
    cout << agency.name << " - ";
    for (int i = 0; i < 5; i++) {
        cout << *arrayPointer++;
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        inventory->print();
        inventory++;
    }
    cout << endl;
}

/* Description
 * @param RentalAgency
 * @param * agencies
 * @pre
 * @post Prints user's estismated rental cost to terminal
 * @return NONE
 */
void estimateRentalCost(RentalAgency * agencies) {
   
    RentalAgency agency;
    RentalCar car;
    int days;
    agency = RentalAgency(agency);
    cout << "How many days would you like to rent the " << car.getMake() << " " << car.getModel() << "?" << endl;
    days = findIntBetween(1, 100);
    car.estimateCost(days);
}

/* Description Finds cheapest rental for user
 * @param RentalAgency
 * @param * agencies
 * @pre
 * @post Prints cheapest rental to the screen
 * @return NONE
 */
void findCheapestRental(RentalAgency * agencies) {
    
    RentalCar car;
    RentalCar *inventory = inventory;
    RentalCar * rentalCarInventory = nullptr;
    for (int i = 0; i < agenciesInFile; i++) {
        for (int j = 0; j < 5; j++) {
            car = *rentalCarInventory;
            if (car.getPrice() > car.getPrice()) {
            }
            rentalCarInventory++;
        }
        agencies++;
    }

    cout << "Cheapest Car: ";
}

/* Description Reserves a car for the user based on user-entered entries
 * @param RentalAgency
 * @param * agencies
 * @pre
 * @post returns statement on whether or not user could reserve a car
 * @return NONE
 */
void reserveCar(RentalAgency * agencies) {
    
    RentalCar car;
    int carIndex;
    int days = 0;
    cout << "Please enter the index number of the car you would like to rent: " << endl;
    carIndex = findIntBetween(1, agenciesInFile);
    cout << "How many days would you like to rent " << car.getMake() << " " << car.getModel() << " for?" << endl;
    if (car.getPrice()) {
        cout << "Congrats! You have rented " << car.getMake() << " " << car.getModel() << " for " << days << " days!\n" << "Your estimated cost is: $ " << car.getPrice() * days << endl;
    } else {
        cout << "I'm sorry, " << car.getMake() << " " << car.getModel() << " is not available." << endl;
    }
}

/* Description Sets a range for user-entered inputs
 * @param minimum
 * @param maximum
 * @pre takes user-entered input
 * @post makes sure user-entered input is in range
 * @return selection
 */
int findIntBetween(int minimum, int maximum) {
    int selection;
    do {
        cout << "Enter selection (" << minimum << "-" << maximum << "): ";
        cin >> selection;
    } while (selection < minimum || selection > maximum);
        return selection;
}

