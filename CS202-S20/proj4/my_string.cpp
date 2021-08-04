/**
 * @ Name: CS 202 - Project 4
 * @ Description: my_string.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/26/20
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
    
    size_t i = 0;
    while (*str++) {
        i++;
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
    
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

/* Description Copies a string to an destinaition
 * @param destinaition pointer
 * @param source pointer
 * @pre a string
 * @post copied string
 * @return copied character string
 */
char * myStringCopy(char *destination, const char *source) {
    
    while ((*destination++ = *source++)) {
        ;
    }
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
   
    while (*destination) {
         destination++;
    }
    while ((*destination++ = *source++))
         ;
     return destination;
}

