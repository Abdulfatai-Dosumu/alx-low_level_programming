#include "main.h"

/**
* print_array - prints n element of an array of integers,
* followed by a new line.
* @n: number of elements of the array to be printed.
* @a: the array to be printed.
*
* Return: none.
*/
void print_array(int *a, int n)
{
  int i;

  i = 0;
  while (i < n)
  {
    if (i < n - 1)
      printf("%d, ", a[i]);
    else
      printf("%d\n", a[i]);
    i++;
  }
}
