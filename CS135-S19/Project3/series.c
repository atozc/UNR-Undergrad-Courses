// Name: series.c
// Purpose: Computes a mathamatical series using a user entered integer number
// Mathamatical Series: S = 1^2 - 2^2 + 3^2 - 4^2 +...+ (-1)^n+1 * n^2
// Date Last Modified: 2/14/19
// Author: Crystal Atoz

#include <stdio.h>
#include <math.h>

int main(void)
{
  int n, result = 0, i;

  // Asks the user to enter an integer
  printf("Enter an integer number: ");
  scanf("%d", &n);

  // Computees the mathamatical series using the user-entered number
  for (i = 1; i <= n; i++) {
    result += pow(-1, i + 1) * pow(i, 2);
  }

  printf("The value of the series is: %d\n", result);

  return 0;
}
