#include <stdio.h>

/*
 * main - Entry point
 *
 * This program prints all the single digit
 * numbers of base 10 starting from 0,
 * followed by a newline using putchar.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
  int a = '0';

  while (a <= '9')
  {
    putchar(a);
    a++;
  }
  putchar('\n');
  return (0);
}
