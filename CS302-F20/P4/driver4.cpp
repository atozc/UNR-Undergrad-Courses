/**
 *  @ Name: CS 302 - Assignment 4
 *  @ Description: driver4.cpp
 *  @ Author: Crystal Atoz
 *  @ Date Last Modified: 11/28/20
 */

#include <iostream>
#include "LeftLeaningRedBlackTree.h"

const int NUM_VALUES = 10;
const int MIN_VALUES = 1;
const int MAX_VALUES = 100;

int randomIntegers(const int min, const int max);

int main() {
    LeftLeaningRedBlackTree<int> llrbt;
    int toInsert, toDelete;

    srand(time(NULL));
    for (int i = 0; i < NUM_VALUES; i++) {
        toInsert = randomIntegers(MIN_VALUES, MAX_VALUES);
        if (i == 4) {
            toDelete = toInsert;
        }
        std::cout << "INSERTING... " << toInsert << std::endl;
        llrbt.add(toInsert);
        llrbt.preorderTraverse();
        std::cout << std::endl;
    }

    std::cout << "DELETING... " << toDelete << std::endl;
    llrbt.remove(toDelete);
    llrbt.preorderTraverse();

    return 0;
}

int randomIntegers(const int min, const int max) {
    int diff = max - min;
    return (rand() % diff) + min;
}

