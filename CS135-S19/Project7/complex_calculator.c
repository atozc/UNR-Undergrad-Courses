// Name: Crystal Atoz
// Purpose: A program that implements a complex calculator with the use of pointers
// Date Last Modified: 4/4/19
// Author: Crystal Atoz

#include <stdio.h>

// Function Prototypes
void read_num(float *real_part, float *imaginary_part);
void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2);
void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result);
void print_complex(float real_result, float imaginary_result);

// Main Function
int main(void)
{
  int command;
  float real_part_1, real_part_2, imaginary_part_1, imaginary_part_2, real_result, imaginary_result, real_part, imaginary_part;

  // Prints the menu of the complex calculator
  printf("Complex Number Arithmetic Program: \n");
  while(command != 4) {
    printf("(1) Add two complex numbers\n");
    printf("(2) Subtract two complex numbers\n");
    printf("(3) Multiply two complex numbers\n");
    printf("(4) Quit\n");
    printf("Choose an option (1 - 4): ");
    scanf("%d", &command);

  switch (command) {
  // Option 1
  case 1:
    read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
    add(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
    print_complex(real_result, imaginary_result);
    break;
  // Option 2
  case 2:
    read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
    subtract(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
    print_complex(real_result, imaginary_result);
    break;
  // Option 3
  case 3:
    read_nums(&real_part_1, &imaginary_part_1, &real_part_2, &imaginary_part_2);
    // multiply(real_part_1, imaginary_part_1, real_part_2, imaginary_part_2, &real_result, &imaginary_result);
    print_complex(real_result, imaginary_result);
    break;
  // Option 4
  case 4:
    printf("Bye!\n");
    break;
  // Default - Tells user that their input is not valid
  default:
    printf("Please input a valid menu option\n");
  }
  }
  return 0;
}

// Function Definitions

// Name of the function: read_num()
// Purpose of the function: It reads the number and points to the correct value
// Meaning of the parameters: There are two, float, pointer parameters
// Description of return value: None
void read_num(float *real_part, float *imaginary_part)
{
  printf("Please type in the real component: ");
  scanf("%f", real_part);
  printf("Please type in the imaginary component: ");
  scanf("%f", imaginary_part);

}

// Name of the function: read_nums()
// Purpose of the function: It reads the numbers and then calls the read_num() function
// Meaning of the parameters: There are four, float, pointer parameters
// Description of return value: None
void read_nums(float* real_part_1, float* imaginary_part_1, float* real_part_2, float* imaginary_part_2)
{
  printf("Reading the first imaginary number...\n");
  read_num(real_part_1, imaginary_part_1);
  printf("Reading the second imaginary number...\n");
  read_num(real_part_2, imaginary_part_2);
}

// Name of the function: add()
// Purpose of the function: To add two user-entered imagnary numbers
// Meaning of the parameters: There are four float parameters and two, float, pointer paramters
// Description of return value: None
void add(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result)
{
  *real_result = real_part_1 + real_part_2;
  *imaginary_result = imaginary_part_1 + imaginary_part_2;
}

// Name of the function: subtract()
// Purpose of the function: Takes two user-entered imaginary numbers and subtracts the second one from the first
// Meaning of the parameters: There are four float paramters and two, float, pointer parameters
// Description of return value: None
void subtract(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result)
{
  *real_result = real_part_1 - real_part_2;
  *imaginary_result = imaginary_part_1 - imaginary_part_2;
}

// Name of the function: multiply()
// Purpose of the function: Multiplys two user-entered imaginary numbers
// Meaning of the parameters: There are four float parameters and two, float, pointer parameters
// Description of return value: None
void multiply(float real_part_1, float imaginary_part_1, float real_part_2, float imaginary_part_2, float* real_result, float* imaginary_result)
{
  *real_result = (real_part_1 * real_part_2) - (imaginary_part_1 * imaginary_part_2);
  *imaginary_result = (real_part_1 * imaginary_part_2) + (real_part_2 * imaginary_part_1);
}

// Name of the function: printf_complex()
// Purpose of the function: To print out the imaginary number
// Meaning of the parameters: There are two float parameters
// Description of return value: None
void print_complex(float real_result, float imaginary_result)
{
  printf("The operation yields %.3f + %.3fi\n\n", real_result, imaginary_result);
}
