/**
 * @ Name: CS 202 - Project 3
 * @ Description: my_string.hpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/11/20
 */

#ifndef MY_STRING_hpp
#define MY_STRING_hpp
#include <iostream>

// Function prototypes for my_string
size_t myStringLength(const char *str);
int myStringCompare(const char *str1, const char *str2);
char * myStringCopy(char *destination, const char *source);
char * myStringCat(char *destination, const char *source);


#endif
