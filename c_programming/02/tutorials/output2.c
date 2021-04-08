// File output2.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char characterName[] = "Tom";
  int characterAge = 70;

  printf("There once was a man named %s \n", characterName);
  printf("He was %d years old .\n", characterAge);

  characterAge = 35;

  printf("He really liked the name %s\n", characterName);
  printf("but dit not like being %d. \n", characterAge);
  return 0;
}
