/**
 * @ Name: CS 202 - Project 2
 * @Description: menu.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/5/20
 */

#include "menu.hpp"
#include "my_string.hpp"

// Function Defintions

// Reads the cars from the file to the user
void readCars(const Car cars[]) {
    cout << endl;
       for (int i = 0; i < cars_InFile; i++) {
           cout << cars[i].year << " " << cars[i].make << " " << cars[i].model << ", $" << cars[i].price
                << " per day, Available: " << boolalpha << cars[i].available << endl;
       }
       cout << endl;
}

// Prints the cars list to the terminal
void printCarsToTerminal(const Car cars[]) {
    cout << endl;
    for (int i = 0; i < cars_InFile; i++) {
        if (cars[i].available) {
            cout << cars[i].year << " " << cars[i].make << " " << cars[i].model << ", $" << cars[i].price
                 << " per day" << endl;
        }
    }
    cout << "\n" << endl;
}

// Prints the cars list to the terminal
void printCarsToTerminal(const Car cars[], int days) {
    cout << endl;
    for (int i = 0; i < cars_InFile; i++) {
        if (cars[i].available) {
            cout << cars[i].year << " " << cars[i].make << " " << cars[i].model << ", Total Cost: $"
                 << cars[i].price * days << endl;
        }
    }
    cout << endl;
}

// Reads cars from user-entered input file
void readCars(Car cars[]) {
    char filename[100];
    ifstream infile;
    cout << "Please enter an input filename: ";
    cin >> filename;
    infile.open(filename);
    if (infile) {
        int i = 0;
        while (!infile.eof()) {
            infile >> cars[i].year >> cars[i].make >> cars[i].model >> cars[i].price >> cars[i].available;
            i++;
        }
    } else {
        cerr << "I am unable to open " << filename << endl;
    }
    infile.close();
}

// Reads cars from user-entered input file
void readCars(Car cars[], const char *filename) {
    ifstream infile;
    infile.open(filename);
    if (infile) {
        int i = 0;
        while (!infile.eof()) {
            infile >> cars[i].year >> cars[i].make >> cars[i].model >> cars[i].price >> cars[i].available;
            i++;
        }
    } else {
        cerr << "I am unable to open " << filename << endl;
    }
    infile.close();
}

// Prints the cars from the input file to the output file
void printCarsToFile(Car cars[]) {
    char filename[100];
    ofstream outfile;
    cout << "Please enter an output filename: ";
    cin >> filename;
    outfile.open(filename);
    if (outfile) {
        for (int i = 0; i < cars_InFile; i++) {
            outfile << cars[i].year << " " << cars[i].make << " " <<  cars[i].model << " " <<  cars[i].price << " " <<  cars[i].available << endl;
        }
    } else {
        cerr << "I am unable to open file " << filename << endl;
    }
    outfile.close();
}

// Sorts the cars by price
void sortCarsByPrice(Car cars[]) {
    Car tempCar;
    bool swapped;
    do {
        swapped = false;
        for (int i = 0; i < cars_InFile - 1; i++) {
            if (cars[i].price > cars[i+1].price) {
                tempCar = cars[i];
                cars[i] = cars[i+1];
                cars[i+1] = tempCar;
                swapped = true;
            }
        }
    } while (swapped);
}

// Sorts the selection entered by the user
int get_IntBetween(int min, int max) {
    int selection;
    do {
        cout << "Please enter selection (" << min << "-" << max << "): ";
        cin >> selection;
    } while (selection < min || selection > max);
    return selection;
}

// Aks user how many days they would like to rent the car, sorts through the cars, and displays selection to user
void rentalCarQuery(Car cars[]) {
    int days;
    cout << "Please enter how many days you would like to rent the car for: " << endl;
    days = get_IntBetween(1, 100);
    bubble_SortCars(cars);
    show_AvailableCars(cars, days);
}

// Goes through available cars to help user with car rental selection
void rentalCarReserve(Car cars[]) {
    int carIndex, days;
    cout << "Please enter the index number of the car you would like to rent: " << endl;
    carIndex = get_IntBetween(1, cars_InFile);
    Car & car = cars[carIndex-1];
    cout << "How many days would you like to rent " << car.make << " " << car.model << " for?" << endl;
    days = get_IntBetween(1, 100);
    if (car.available) {
        car.available = false;
        cout << "Congrats! You have rented " << car.make << " " << car.model << " for " << days << " days!\n"
             << "Your estimated cost is: $" << car.price * days << endl;
    } else {
        cout << "I am sorry, " << car.make << " " << car.model << " is not available right now." << endl;
    }
}





