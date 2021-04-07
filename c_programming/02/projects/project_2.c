// Project 2

#include <stdio.h>

#define PI 3.1415926535898f;
#define SCALE_FACTOR (4.0f / 3.0f)

int main(void)
{
  float radius, volume;

  printf("Please enter the radius of the sphere: ");
  scanf("%2f", &radius);

  // Calculate volume
  radius = radius * radius * radius;
  volume = SCALE_FACTOR * radius * PI;

  printf("The volume is: %.2f", volume);
  return 0; 
}
