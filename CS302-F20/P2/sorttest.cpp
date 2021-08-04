/**
 * @ Name: CS 302 - Assignment 2
 * @ Desciption: sorttest.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 10/8/20
 */

#include <iostream>
#include <cstdlib>

#include "sorting.h"

int main() {

    SortAlg testObj;
    int counter = 0;

    // Randomly generates 1000 numbers and sorts them
    std::cout << std::endl << "Sorting for 1,0000 numbers..." << std::endl << std::endl;
    testObj.generateDataSet(1000);
    std::vector<int> dataSet = testObj.getDataSet();

    for(counter = 0; counter < 10; counter++) {
        dataSet = testObj.getDataSet();
        testObj.bubbleSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Bubble Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        dataSet = testObj.getDataSet();
        testObj.quickSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Quick Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        dataSet = testObj.getDataSet();
        testObj.countingSort(dataSet);
    }
    std::cout << "Counting Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;
    testObj.clearDataSet();
    std::cout << std::endl;

    
    dataSet = testObj.getDataSet();
    testObj.countingSort(dataSet);
    testObj.clearTotals();

    // Sorts the 1000 sorted numbers from the previous algorithm tests
    std::cout << "Testing SORTED 1,000 numbers list..." << std::endl << std::endl;
    for(counter = 0; counter < 10; counter++) {
        testObj.bubbleSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Bubble Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.quickSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Quick Sort Results" << std::endl;
    std::cout << "------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.countingSort(dataSet);
    }
    std::cout << "Counting Sort Results" << std::endl;
    std::cout << "---------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

    // Randomly generates 10000 numbers and sorts them
    std::cout << "Sorting for 10,000 numbers..." << std::endl << std::endl;
    testObj.generateDataSet(10000);
    dataSet = testObj.getDataSet();

    for(counter = 0; counter < 10; counter++) {
        testObj.bubbleSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Bubble Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    dataSet = testObj.getDataSet();
    testObj.avg(10);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.quickSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Quick Sort Results" << std::endl;
    std::cout << "------------------" << std::endl;
    dataSet = testObj.getDataSet();
    testObj.avg(10);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.countingSort(dataSet);
    }
    std::cout << "Counting Sort Results" << std::endl;
    std::cout << "---------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;
    testObj.clearDataSet();
    std::cout << std::endl;

    dataSet = testObj.getDataSet();
    testObj.countingSort(dataSet);
    testObj.clearTotals();


    // Sorts the 10000 numbers that were sorted from the previous algorithms
    std::cout << "Testing SORTED 10,000 numbers list..." << std::endl << std::endl;
    for(counter = 0; counter < 10; counter++) {
        testObj.bubbleSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Bubble Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.quickSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Quick Sort Results" << std::endl;
    std::cout << "------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.countingSort(dataSet);
    }
    std::cout << "Counting Sort Results" << std::endl;
    std::cout << "---------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    
    // Randomly generates 100000 numbers and sorts them
    std::cout << "Sorting for 100,000 numbers..." << std::endl << std::endl;
    testObj.generateDataSet(100000);
    dataSet = testObj.getDataSet();

    for(counter = 0; counter < 1; counter++) {
        testObj.bubbleSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Bubble Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    dataSet = testObj.getDataSet();
    testObj.avg(1);
    std::cout << std::endl;

    for(counter = 0; counter < 1; counter++) {
        testObj.quickSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Quick Sort Results" << std::endl;
    std::cout << "------------------" << std::endl;
    testObj.avg(1);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.countingSort(dataSet);
    }
    std::cout << "Counting Sort Results" << std::endl;
    std::cout << "---------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;
    testObj.clearDataSet();
    std::cout << std::endl;
    
    dataSet = testObj.getDataSet();
    testObj.countingSort(dataSet);
    testObj.clearTotals();

    // Sorts the 100000 numbers that are sorted from the previous algorithms
    std::cout << "Testing SORTED 100,000 numbers list..." << std::endl << std::endl;
    for(counter = 0; counter < 10; counter++) {
        testObj.bubbleSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Bubble Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    testObj.avg(1);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.quickSort(dataSet, 0, dataSet.size());
    }
    std::cout << "Quick Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    testObj.avg(1);
    std::cout << std::endl;

    for(counter = 0; counter < 10; counter++) {
        testObj.countingSort(dataSet);
    }
    std::cout << "Counting Sort Results" << std::endl;
    std::cout << "-------------------" << std::endl;
    testObj.avg(10);
    std::cout << std::endl;
    

    return 0;
}
