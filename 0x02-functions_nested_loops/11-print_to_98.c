#include "main.h"
#include <stdio.h>

/**
* print_to_98 - a function that prints all number from n to 98,
* followed by a new line.
* @n : the starting number.
*
* Return: none.
*/
void print_to_98(int n)
{
  if (n <= 98)
  {
    for (;n <= 98; n++)
    {
      if (n == 98)
      {
        printf("%d\n",n);
      }
      else
      {
        printf("%d, ", n);
      }
    }
  }
  else if (n > 98)
  {
    for (;n >= 98; n--)
    {
      if (n == 98)
      {
        printf("%d\n", n);
      }
      printf("%d, ", n);
    }
  }
}
