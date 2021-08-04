// Name: circles.c
// Purpose: This program computes values related to circles inscribed in a rectangle
// Author: Crystal Atoz
// Date Last Modified: 2/5/19

#include <stdio.h>
#define PI 3.14f

int main(void)
{
  int radii, perimeter, diameter, length, width, area;
  float circumference, total_area, difference;

  printf("Enter the value of the radii of the two circles: ");
  scanf("%d", &radii);

  diameter = radii * 2;
  circumference = diameter * PI;
  // Since there are two circles, the area of each circle is added together
  total_area = PI *radii * radii + (PI * radii * radii);
  // The width of the rectangle is the same length as the diameter
  width = diameter;
  // The length of the rectangle is the same as multiplying the radii by 4
  length = radii * 4;
  area = length * width;
  perimeter = 2 * (length + width);
  difference = area - total_area;

  printf("This program computes values related to circles inscribed in a rectangle.\n");
  printf("The perimeter of the rectangle is: %d\n", perimeter);
  printf("The area of the rectangle is: %d\n", area);
  printf("The diameter of a circle is: %d\n", diameter);
  printf("The circumference of a circle is: %0.03f\n", circumference);
  printf("The total area of the circles is: %0.03f\n", total_area);
  printf("The difference between the area of the rectangle and the total area of the circles is: %0.03f\n", difference);

  return 0;
}
