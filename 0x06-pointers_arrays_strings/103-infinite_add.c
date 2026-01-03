#include "main.h"

int _strlen(char *k)
{
  int i = 0;
  while (k[i] != '\0')
  {
    i++;
  }
  return (i);
}

void reverse(char *c, int size)
{
  int i = 0;
  char l;
  char k;

  while (i <= size/2)
  {
    l = c[i];
    k = c[size - (i + 1)];
    c[i] = k;
    c[size - (i + 1)] = l;
    i++;
  }
}

/**
* infinite_add - adds two numbers.
* @n1: First number
* @n2: Second number
* @r: the buffer that the function will use to store the result
* @size_r: the buffer size
*
* Return: a pointer to the result.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int i = _strlen(n1) - 1;
  int j = _strlen(n2) - 1;
  int k = 0;
  int carry = 0;

  while (j >= 0 || i >= 0 || carry)
  {
    int sum = carry;

    if (j >= 0)
      sum += n2[j--] - '0';
    if (i >= 0)
      sum += n1[i--] - '0';
    carry = sum / 10;

    if (k <= size_r)
    {
      r[k++] = (sum % 10) + '0';
    }
  }

  r[k] = '\0';
  if ((size_r - 1) < k)
  {
    r = 0;
    return (r);
  }
  reverse(r, k);
  return (r);
}
