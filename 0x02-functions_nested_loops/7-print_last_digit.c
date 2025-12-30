#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: the last digit.
*/
int print_last_digit(int n)
{
  int c;

  if (n < 0)
  {
    n = (-1 * n);
  }
  c = n % 10;
  _putchar(c + '0');
  return (c);
}
