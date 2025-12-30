#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: none
*/
void print_alphabet_x10(void)
{
  char a = 'a';
  int i = 0;

  while (i < 10)
  {
    while (a <= 'z')
    {
      _putchar(a);
      a++;
    }
    a = 'a';
    i++;
    _putchar('\n');
  }
}
