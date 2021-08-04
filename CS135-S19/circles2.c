// Name:
// Purpose:
// Author:

#include <stdio.h>
#define PI 3.14f

int main(void)
{
  int radii, parimeter, area, diameter, cicumference, total_area, differnce;
  length = 24;
  width = 12;

  printf("This program computes the values related to circles inscribed in a rectangle.\n");

  printf("Enter the value of the radii of the two circles: ");
  scanf("%d", &radii);

  parimeter = length + width + length +width;
  printf("The perimeter of the rectangle is: %d\n", parimeter);

  area = length * width;
  printf("The area of the rectangle is: %d\n", area);

  diameter = radii * 2;
  printf("The diameter of a circle is: %d\n", diameter);

  circumference = diameter * PI;
  printf("The circumference of a circle is: %0.03f\n", circumference);

  total_area = PI * radii * radii + (PI * radii * radii);
  printf("The total area of the circles is: %0.03f\n", total_area);

  difference = area - total_area;
  printf("The difference between the area of the rectangle and the total area of the circles is: %d\n", difference);

  return 0;
}
