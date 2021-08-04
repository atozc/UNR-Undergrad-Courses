// Name: time.c
// Purpose: This program takes input from the user four times, in the format h:m:s, and prints them out in a tabular format
// Author: Crystal Atoz
// Date Last Modified: 2/5/19

#include <stdio.h>

int main(void)
{
  int hr1, hr2, hr3, hr4, min1, min2, min3, min4, sec1, sec2, sec3, sec4;
  //Asks user to enter time in a specific format
  printf("Enter time 1 (h:m:s): ");
  //Takes user input and stores it into the appropriate variables
  scanf("%d:%d:%d", &hr1, &min1, &sec1);

  printf("Enter time 2 (h:m:s): ");
  scanf("%d:%d:%d", &hr2, &min2, &sec2);

  printf("Enter time 3 (h:m:s): ");
  scanf("%d:%d:%d", &hr3, &min3, &sec3);

  printf("Enter time 4 (h:m:s): ");
  scanf("%d:%d:%d", &hr4, &min4, &sec4);

  //Prints user input in tabular format
  printf("Hours\tMinutes\tSeconds\n");
  printf("%-5d\t%4d\t%7d\n", hr1, min1, sec1);
  printf("%-5d\t%4d\t%7d\n", hr2, min2, sec2);
  printf("%-5d\t%4d\t%7d\n", hr3, min3, sec3);
  printf("%-5d\t%4d\t%7d\n", hr4, min4, sec4);

  return 0;
}
