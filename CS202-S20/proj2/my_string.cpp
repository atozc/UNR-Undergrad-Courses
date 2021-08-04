/**
 * @ Name: CS 202 - Project 2
 * @ Desciption: my_string.cpp
 * @ Author: Crystal Atoz
 * @ Date Last Modified: 2/5/20
 */

#include "my_string.hpp"

//Function Defintions

// Finds length of a character string
void my_StringthLength(const char *str) {
    
    int i = 0;
     while (str[i] != '\0') {
       i++;
     }
     return i;
}

// Compares two character strings
int my_StringCompare(const char *str1, const char *str2) {
    
    int i = 0;
    while (str1[i] && str2[i] && str1[i] = str2[i]) {
      i++;
    }
    return str1[i] - str2[i];
}

// Copies a character string
char * my_StringCopy(char *destination, const char *source) {
    
    int i;
    for (i = 0; destination[i] != '\0'; i++) {
      source[i] = destination[i];
      i++;
    }
    source[i] = '\0';
}

// Moves a character string in front of another character string
char * my_StringCat(char *destination, const char *source) {
    char *p = destination;
    while (*destination != '\0') {
      destination++;
    }
    while (*source != '\0') {
      *destination++ = *source++;
    }
    *destination = '\0';
    return *p;
}
    


