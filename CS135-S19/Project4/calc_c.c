// Name: calc.c
// Purpose: An interactive program that implements a scientfic calculator
// Date Last Modified: 3/5/19
// Author: Crystal Atoz

#include <stdio.h>
#include <math.h>

int main(void)
{
  int command, flag = 1;
  double term1, term2 = 0;
  int int1, int2 = 0;

  while (command != 8) {
    printf("This program implements a calculator.\n");
    printf("Options: ");
    printf("\n");
    printf("1 - addition\n");
    printf("2 - subtraction\n");
    printf("3 - multiplication\n");
    printf("4 - division\n");
    printf("5 - exp(x)\n");
    printf("6 - log(x)\n");
    printf("7 - toggle calculator type\n");
    printf("8 - exit program\n");
    printf("Please enter your option: ");
    scanf("%d", &command);

    switch (command) {
      case 1:
      if(flag == 1)
      {
        printf("Enter first term: ");
        scanf("%lf", &term1);
        printf("Enter second term: ");
        scanf("%lf", &term2);
        printf("The sum is: %.15lf\n", term1 + term2);
      }
      else{
          printf("Enter first term: ");
          scanf("%d", &int1);
          printf("Enter second term: ");
          scanf("%d", &int2);
          printf("The sum is: %d\n", int1 + int2);
        }
        break;
      case 2:
      if(flag == 1)
      {
        printf("Enter first term: ");
        scanf("%lf", &term1);
        printf("Enter second term: ");
        scanf("%lf", &term2);
        printf("The difference is: %.15lf\n", term1 - term2);
      }
      else{
        printf("Enter first term: ");
        scanf("%d", &int1);
        printf("Enter second term: ");
        scanf("%d", &int2);
        printf("The difference is: %d\n", int1 - int2);
      }
        break;
      case 3:
      if(flag == 1)
      {
        printf("Enter first term: \n");
        scanf("%lf", &term1);
        printf("Enter second term: \n");
        scanf("%lf", &term2);
        printf("The product is: %.15lf\n", term1 * term2);
      }
      else{
        printf("Enter first term: ");
        scanf("%d", &int1);
        printf("Enter second term: ");
        scanf("%d", &int2);
        printf("The product is: %d\n", int1 * int2);
      }
        break;
      case 4:
      if(flag == 1)
      {
        printf("Enter first term: ");
        scanf("%lf", &term1);
        printf("Enter second term: ");
        scanf("%lf", &term2);
          if(term2 == 0) {
            printf("You cannot divide by zero!\n");
          }
          else {
            printf("The quotient is: %.15lf\n", term1 / term2);
          }
        }
        else{
          printf("Enter first term: ");
          scanf("%d", &int1);
          printf("Enter second term: ");
          scanf("%d", &int2);
          if(int2 == 0)
          {
            printf("You cannot divide by zero!\n");
          }
          else{
            printf("The quotient is: %d\n", int1 / int2);
          }
        }
          break;
      case 5:
        if(flag == 1)
        {
          printf("Enter term: ");
          scanf("%lf", &term1);
          printf("The result of exp(%.15lf) is: %.15lf\n", term1, exp(term1));
        }
        else{
          printf("Cannot calculate with integers.\n");
        }
        break;
      case 6:
        if(flag == 1)
        {
          printf("Enter term: \n");
          scanf("%lf", &term1);
          printf("The result of log(%.15lf) is: %.15lf\n", term1, log(term1));
          if(term1 <= 0) {
            printf("Cannot take the log of that number!\n");
          }
        }
        else{
          printf("Cannot calculate with integers.\n");
        }
          break;
      case 7:
        if(flag == 1) {
        flag = 0 ;
        printf("Calculator now works with integers.\n");
        }
        else if (flag == 0) {
        flag = 1;
        printf("Calculator now works with doubles.\n");
        }
        break;
      case 8:
        break;
      default:
        printf("Invalid Option.\n");
      }
    }
return 0;
}
