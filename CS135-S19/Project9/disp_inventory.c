// Name: disp_inventory.c
// Purpose: Reads info from inventory.txt and displays it to the screen
// Author: Crystal Atoz

#include<stdio.h>

int main(int argc, char *argv[]) {

  // Declares variables
  int part_number, quantity;
  float price;

  // Declares a file pointer
  FILE *fp;
  // Opens the file for reading binary
  fp = fopen("inventory.txt", "rb");

  printf("Below are the items in your inventory.\n");
  printf("Part#\tQuantity\tItem Price\n");

  // Loops through and reads the file
  for (int i = 0; i < 2; i++) {
    // Scans the inputted inventory in the file
    fscanf(fp, "%d, %d, %f", &part_number, &quantity, &price);
    // displays it to the screen
    printf("%5d\t%8d\t$%9.2f\n", part_number, quantity, price);
  }

  // Closes the file
  fclose(fp);

  return 0;
}
