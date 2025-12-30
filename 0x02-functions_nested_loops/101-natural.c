#include "main.h"
#include <stdio.h>

/*
* sum_of_multiples - prints the sum of all the multiples of 3 and 5 below 1024.
* followed by a nwe line.
* 
* Return: none
*/
void sum_of_multiples(void)
{
  int i,j;
  j = 0;

  for (i = 0; i < 1024; i++)
  {
    if ((i % 3 == 0) || (i % 5 == 0))
    {
      j += i;
    }
  }
  printf("%d\n", j);
}

/**
* main - Entry point
*
* Return: Always 0 (success).
*/
int main(void)
{
  sum_of_multiples();

  return (0);
}
