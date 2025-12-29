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
  int b;

  while (a <= 99)
  {
    b = a + 1;
    while (b <= 99)
    {
      /*First Number: a */
      putchar((a / 10) + '0');
      putchar ((a % 10) + '0');

      putchar(' ');

      /* Second number: b*/
      putchar((b / 10) + '0');
      putchar((b % 10) + '0');

      /*If it's not the last combination (98 99), print comman and space*/
      if (a != 98 || b != 99)
      {
        putchar(',');
        putchar(' ');
      }
      b++;
    }
    a++;
  }
  putchar('\n');
  return (0);
}
