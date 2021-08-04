/**
 * @ Name: CS 202 - Project 3
 * @ Description: my_string.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/11/20
 */


#include "my_string.hpp"
#include <iostream>


// Function Definitions

/* Description Finds the length of a string
 * @param const char string pointer
 * @param
 * @pre takes string
 * @post length of the string using a pointer
 * @return int value of string
 */
size_t myStringLength(const char *str) {
    
    size_t i;
    for (i = 0; *(str + i) != 0; i++) {
    }
    return i;
}

/* Description Compares two strings
 * @param const char string pointer 1
 * @param const char string pointer 2
 * @pre two strings
 * @post the value after comparing two strings
 * @return int value of compared strings
 */
int myStringCompare(const char *str1, const char *str2) {
    
    for (int i = 0;;  i++) {
        char str1Value = *(str1 + i);
        char str2Value = *(str2 + i);
        if (str1Value == 0 && str2Value == 0) {
            return 0;
        }
        if (str1Value != str2Value) {
            return str1Value - str2Value;
        }
    }
}

/* Description Copies a string to an destinaition
 * @param destinaition pointer
 * @param source pointer
 * @pre a string
 * @post copied string
 * @return copied character string
 */
char * myStringCopy(char *destination, const char *source) {
    
    int i;
    for (i = 0; *(source + i) != 0; i++) {
        *(destination + i) = *(source + i);
    }
    *(destination + i) = 0;
    return destination;
}

/* Description makes a string concatation
 * @param pointer destination
 * @param pointer source
 * @pre string
 * @post the 2nd string copied after the 1st string
 * @return character string
 */
char * myStringCat(char *destination, const char *source){
   
    size_t size = myStringLength(destination);
    myStringCopy(destination + size, source);
    return destination;
}
