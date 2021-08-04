// Name: strings.c
// Purpose: Program that implements four of the string library functions using pointers
// Author: Crystal Atoz
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100

// Function Prototypes
void strlength (char *str_1, char *str_2);
int strcomp (char *str_a, char *str_b);
char strconcat (char *destination_x, char *source_y);
void strcopy (char *destination_a, char *source_b);

int main(void) {

  // Declaration of strings
  char str1[SIZE], str2[SIZE];

  // Asks user to enter the first string
  printf("Please enter the first string: ");
  scanf("%100s",str1);

  // Asks user to enter the second string
  printf("Please enter the second string: ");
  scanf("%100s",str2);

  // Calls the functions

  // String length function
  strlength(str1, str2);

  // String compare function
  if (strcomp(str1, str2) == -1) {
    printf("String 1 comes before string 2 alphabetically.\n");
  }
  else if (strcomp(str1, str2) == 1) {
    printf("String 2 comes before string 1 alphabetically.\n");
  }
  else if (strcomp(str1, str2) == 0) {
    printf("The two strings are the same.\n");
  }

  // String concatenation function
  strconcat(str1, str2);
  printf("String 1 after concatenation: %s\n", str1);
  printf("String 2 after concatenation: %s\n", str2);

  // String copy function
  strcopy(str1, str2);

  return 0;
}

// Function definitions

// Name of the function: strlength()
// Purpose of the function: Calculates the length of the string
// Meaning of the parameters: A character pointer to the two strings
// Description of return value: Returns the length of the string not including the null terminator
void strlength (char *str_1, char *str_2) {
  // Declares variables
  int length1 = 0, length2 = 0;

  // Calculates the length of string 1 and returns that value
  while (str_1[length1] != '\0') {
        length1++;
    }
  while (str_2[length2] != '\0') {
        length2++;
    }

  // Prints to the screen the lengths of string 1 and 2
  printf("The length of string 1 is: %d\n", length1);
  printf("The length of string 2 is: %d\n", length2);
}

// Name of the function: strcom()
// Purpose of the function: Compares the two strings alphabetically and returns the appropriate value
// Meaning of the parameters: Two character pointers to two strings (string 1 and 2)
// Description of return value: Returns the appropriate value after the strings are compared

int strcomp (char *str_a, char *str_b) {
  while (*str_a != '0' && *str_b != '0') {
    if (tolower(*str_a) != tolower(*str_b)) {
      if (tolower(*str_a) - tolower(*str_b) > 0) {
        return - 1;
      }
      else {
        return 1;
      }
    }
    if (*str_a == '0' && *str_b == '0') {
      return 0;
    }
    else if (*str_a == '0') {
      return 1;
    }
    else {
      return -1;
    }
  }
}

// Name of the function: strconcat()
// Purpose of the function: Adds the source string to the end of the destination string
// Meaning of the parameters: Two character pointers to the destination string and source string
// Description of return value: Returns a pointer to the beginning of the destination string
char strconcat (char *source_y, char *destination_x) {
   char *p = destination_x;
   while (*destination_x != '\0') {
     destination_x++;
   }
   while (*source_y != '\0') {
     *destination_x++ = *source_y++;
   }
   *destination_x = '\0';
   return *p;
}

// Name of the function: strcopy()
// Purpose of the function: Copies the source string into the destination string, including the null terminator
// Meaning of the parameters: Two character pointers to the destination string and source string
// Description of return value: Returns a pointer to the beginning of the desstination string
void strcopy (char *destination_a, char *source_b){
  // Declares variables
  int i;

  // Loops through and copies the source string into the destination string
  for(i = 0; destination_a[i] != '\0'; i++) {
    source_b[i] = destination_a[i];
  }
    source_b[i] = '\0';

  // Prints the result after
  printf("String 1 after copying: %s\n", destination_a);
  printf("String 2 after copying: %s\n", source_b);
}
