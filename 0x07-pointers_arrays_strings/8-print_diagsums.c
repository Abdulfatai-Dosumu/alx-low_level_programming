#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals of a square
* matrix of integers.
* @a: a square matrix.
* @size: the size of the square matrix.
*
* Return: none
*/
void print_diagsums(int *a, int size)
{
  int i, total, sum, sum1;

  sum = 0;
  sum1 = 0;
  total = size * size;
  i = 0;

  while (i < total)
  {
    sum += a[i];
    i += (size + 1);
  }

  i = (size - 1);

  while (i < (total - 1))
  {
    sum1 += a[i];
    i += (size - 1);
  }
  printf("%d, %d\n", sum, sum1);
}
