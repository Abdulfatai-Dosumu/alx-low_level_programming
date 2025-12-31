#include "main.h"

/**
* print_line - draws a straight line in the terminal.
* ending with a new line.
* @n: the number of times the character _ should be printed.
* if n is 0 or less, it should print a new line.
*
* Return: none.
*/
void print_line(int n)
{
  if (n > 0)
  {
    while (n > 0)
    {
      _putchar('_');
      n--;
    }
  }
  _putchar('\n');
}
