#include <stdio.h>
/*
 * main - Entry point
 *
 * This program prints the alphabet in lowercase, and
 * then in uppercase, followed by a new line using
 * putchar thrice.
*/
int main(void)
{
  char a = '0';
  char b = 'a';

  while (a <= '9')
  {
    putchar(a);
    a++;
  }

  while (b <= 'f')
  {
    putchar(b);
    b++;
  }
  putchar('\n');
  return (0);
}
