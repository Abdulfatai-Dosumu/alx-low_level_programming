#include <stdio.h>

/*
 * main - Entry point
 *
 * This program prints the alphabets in lower
 * case, followed by a newline using putchar.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
  char a = 'z';

  while (a >= 'a')
  {
    putchar(a);
    a--;
  }
  putchar('\n');
  return (0);
}
