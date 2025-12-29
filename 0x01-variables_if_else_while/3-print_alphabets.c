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
  char a = 'a';
  char b = 'A';

  while (a <= 'z')
  {
    putchar(a);
    a++;
  }

  while (b <= 'Z')
  {
    putchar(b);
    b++;
  }
  putchar('\n');
  return (0);
}
