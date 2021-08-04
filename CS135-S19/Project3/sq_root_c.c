// Name: sq_root_c.c
// Purpose: Program that guesses the square root of a user entered number and detects when it gets "stuck" guessing
// Date Last Modified: 2/18/19
// Author: Crystal Atoz

#include <stdio.h>
#include <math.h>

int main(void)
{
  float n, guess = 1.0f, last_guess;
  int counter = 0;

  // Asks user to enter a positive number
  printf("Enter a number: ");
  scanf("%f", &n);

  printf("%d\t%.5f\n", counter, guess);

  // Guesses the square root of the user-entered number
  while (1) {
    counter++;
    last_guess = guess;
    if (fabs((guess * guess) - n) < 1e-5 || last_guess == guess) {
      break;
    }
    printf("%d\t%.5f\n", counter, guess);
  }

  printf("Estimated square root of %.5f: %.5f\n", n, guess);

  return 0;
}
