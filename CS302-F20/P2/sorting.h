/**
 * @ Name: CS 302 - Assignment 2
 * @ Desciption: sorting.h
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 10/8/20
 */

#include <iostream>
#include <vector>


class SortAlg {
    
    public:
        void generateDataSet(int);
        void clearDataSet();
        void bubbleSort(std::vector<int>&, int, int);
        void quickSort(std::vector<int>, int, int);
        void countingSort(std::vector<int>&);
        void avg(int);
        void clearTotals();

        std::vector<int> getDataSet();

    private:
        std::vector<int> dataSet;
        std::vector<double> sortTimes;
        std::vector<int> totalComparisons;
        std::vector<double> totalSwaps;

        int separate(std::vector<int>&, int, int, int&, double&);
        void sortFirstMiddleLast(std::vector<int>&, int, int, int, int&, double&);
        void quickSort(std::vector<int>&, int, int, int&, double&);
};
