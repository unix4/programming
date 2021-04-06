// dweight.c

/*Computes the dimensional weight of a 12 * 10 * 18 box */

#include <stdio.h>

int main(void)
{
  int height, length, width, volume, weight;

  height = 8;
  length = 12;
  width = 10;

  volume = height * length * width;
  weight = (volume + 165) / 166;

  printf("Dimensions: %dx%dx%dx\n", length, width, height);
  printf("Volume (cubix inches) : %d\n", volume);
  printf("Dimensions weight (pounds): %d\n", weight);
  
  return 0;
}
