// Name: save_inventory.c
// Purpose: Asks user to enter info on business inventory and then stores that info in another file
// Author: Crystal Atoz

#include <stdio.h>

int main(void) {

  // Declares variables
  int part_number, quantity;
  float price;

  // Declares a file pointer
  FILE *fp;
  // Opens the file for writing binary
  fp = fopen("inventory.txt", "wb");

  printf("This program stores a business inventory.\n");

  // Asks the user to enter info in a loop and stops when the part_number is equal to zero
   for (int i = 0; i < 100; i++) {
     printf("Please enter item data (part number, quantity, price): ");
     scanf("%d, %d, %f", &part_number, &quantity, &price);
     if (part_number == 0) {
       break;
     } else {
     fprintf(fp, "%d, %d, %f\n", part_number, quantity, price);
     }
    }

  printf("Thank you. Inventory stored in file inventory.txt.\n");

  // Closes the file
  fclose(fp);

  return 0;
}
