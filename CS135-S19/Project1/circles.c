// Name: circles.c
// Purpose: This program computes the values related to circles inscribed in a rectangle.
// Author: Crystal Atoz

#include <stdio.h>
#define PI 3.14f

int main(void)
{
  int radii, perimeter, diameter, length, width, area = 0;
  float circumference, total_area, difference = 0.0f;

  printf("Enter the value of the radii of the two circles: ");
  scanf("%d", &radii);

  diameter = 2 * radii;

  circumference = diameter * PI;

  total_area = PI * radii * radii + (PI * radii * radii);

  width = diameter;

  length = 4 * radii;

  perimeter = 2 * (length + width);

  area = length * width;

  difference = area - total_area;

  printf("This program computes the values related to circles inscribed in a rectangle.\n");

  printf("The perimeter of the rectangle is: %d\n", perimeter);

  printf("The area of the rectangle is: %f\n", area);

  printf("The diameter of a circle is: %d\n", diameter);

  printf("The circumference of a circle is: %0.03f\n", circumference);

  printf("The total area of the circles is: %0.03f\n", total_area);

  printf("The difference between the area of the rectangle and the total area of the circles is: %0.03f\n", difference);

  return 0;
}
