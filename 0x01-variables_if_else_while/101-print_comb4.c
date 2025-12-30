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
  int a = 0;
  int b = 1;
  int c = 2;

  while (a <= 7)
  {
    while (b <= 8)
    {
      while (c <= 9)
      {
        if ((a != b) && (b != c))
        {
          putchar(a + '0');
          putchar(b + '0');
          putchar(c + '0');
          if (a != 7)
          {
            putchar(',');
            putchar(' ');
          }
        }
        c++;
      }
      c = b + 1;
      b++;
    }
    b = a + 1;
    a++;
  }
  putchar('\n');
  return (0);
}
