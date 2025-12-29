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
  int b = '1';

  while (a <= '8')
  {
    while (b <= '9')
    {
      putchar(a);
      putchar(b);
      if (a != '8')
      {
        putchar(',');
        putchar(' ');
      }
      b++;
    }
    a++;
    b = a + 1;
  }
  putchar('\n');
  return (0);
}
