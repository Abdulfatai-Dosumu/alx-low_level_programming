#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
* @a: the array of integers
* @n: the number of elements in the array
*
* Return: Always 0 (success)
*/
void reverse_array(int *a, int n)
{
  int count = 0;
  int j,k;
  int l = n;

  while (l >= (n / 2))
  {
    j = a[l - 1];
    k = a[count];
    a[l - 1] = k;
    a[count] = j;
    l--;
    count++;
  }
}
