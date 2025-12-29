#include <stdio.h>

/*
 * main - Entry point
 *
 * This program prints the alphabets in lower
 * case except q and e, followed by a newline using putchar.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
  char a = 'a';

  while (a <= 'z')
  {
    if ((a != 'q') && (a != 'e'))
    {
      putchar(a);
      a++;
    }

    else
    {
      a++;
    }
  }
  putchar('\n');
  return (0);
}
