/**
 * @ Name: CS 302 - Assignment 2
 * @ Desciption: StackArray.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 9/14/20
 */


#include <stdio.h>
#include "StackArray.h"

const int EMPTY_STACK = -1;

template<typename DataType>
StackArray<DataType>::StackArray(int maxNumber) : maxSize(maxNumber), top(EMPTY_STACK) {
    dataItems = new DataType[maxSize];
};

template<typename DataType>
StackArray<DataType>::StackArray(const StackArray &other) : maxSize(other.maxSize), top(other.top) {
    dataItems = new DataType[maxSize];
    for (int i = 0; i < top; i++) {
        dataItems[i] = other.dataItems[i];
    }
}

template<typename DataType>
StackArray<DataType>& StackArray<DataType>::operator=(const StackArray &other) {
    if (this != other) {
        delete dataItems;
        maxSize = other.maxSize;
        top = other.top;
        dataItems = new DataType[maxSize];
        for (int i = 0; i < top; i++) {
            dataItems[i] = other.dataItems[i];
        }
    }
    return this;
}

template<typename DataType>
StackArray<DataType>::~StackArray() {
    delete dataItems;
}

template<typename DataType>
void StackArray<DataType>::push(const DataType &newDataItem) throw(logic_error) {
    if (isFull()) {
        throw logic_error("You can't push() to a full stack");
    }
    dataItems[++top] = newDataItem;
}

template<typename DataType>
DataType StackArray<DataType>::pop() throw(logic_error) {
    if (isEmpty()) {
        throw logic_error("You can't pop() from a empty stack");
    }
    top--;
    return dataItems[top + 1];
}

template<typename DataType>
void StackArray<DataType>::clear() {
    top = EMPTY_STACK;
}

template<typename DataType>
bool StackArray<DataType>::isEmpty() const {
    return top == EMPTY_STACK;
}

template<typename DataType>
bool StackArray<DataType>::isFull() const {
    return top == maxSize - 1;
}

template<typename DataType>
void StackArray<DataType>::showStructure() const {
    if (isEmpty()) {
        std::cout << "Empty Stack";
    } else {
        for (int i = 0; i <= top; i++) {
            std::cout << dataItems[i] << " ";
        }
    }
    std::cout << std::endl;
}
