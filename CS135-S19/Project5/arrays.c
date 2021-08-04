// Name: arrays.c
// Purpose: Counts occurrences of digits 0 through 9 in a user-entered array.
// Date Last Modified: 3/12/19
//Author: Crystal Atoz

#include <stdio.h>

int main(void)
{
  int rows, columns;
  int count[10] = {0};

  printf("This program counts occurrences of digits 0 through 9 in an NxM array.\n");

  // Prompts user to enter the size of the array
  printf("Enter the size of the array (Row Column): ");
  scanf("%d %d", &rows, &columns);

  int array[rows][columns];
  int a, b;

  // Prompts user to enter the values for the array and stores it
  for(int a = 0; a < rows; a++) {
    printf("Enter row %d: ", a);
    for(int b = 0; b < columns; b++) {
      scanf("%d", &array[a][b]);
      count[array[a][b]]++;
    }
  }

  // Counts and rints the occurences of each digit in the array
  printf("Total counts for each digit:\n");
  for(int i = 0; i < 10; i++) {
    if (count[i] != 1) {
      printf("Digit %d occurs %d times\n", i, count[i]);
    }
    else {
      printf("Digit %d occurs 1 times\n", i);
    }
  }

  // Prints the occurrences of the digits in an array
  printf("The digit counts directly from the 1D array: \n");
  for(int i = 0; i < 10; i++) {
    if (count[i] != 1) {
      printf("%d ",count[i]);
    }
    else {
      printf("%d ", 1);
    }
  }

  // Prints the user-entered array to the screen
  printf("\nThe original 2D array entered by the user: \n");
  for(int a = 0; a < rows; a++) {
    for(int b = 0; b < columns; b++) {
      printf("%d ", array[a][b]);
    }
    printf("\n");
  }

return 0;
}
