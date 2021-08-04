/**
 * @ Name: CS 202 - Project 2
 * @Description: menu.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/5/20
 */

#ifndef menu_h_
#define menu_h_

// Function Prototypes
int menu();

void readCars(const Car cars[]);
void printCarsToTerminal(const Car cars[]);
void printCarsToTerminal(const Car cars[], int days);
void readCars(Car cars[]);
void readCars(Car cars[], const char *filename);
void printCarsToFile(Car cars[]);
void sortCarsByPrice(Car cars[]);
int get_IntBetween(int min, int max);
void rentalCarQuery(Car cars[]);
void rentalCarReserve(Car cars[]);

#endif 
