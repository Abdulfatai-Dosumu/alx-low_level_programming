#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: the number of times the character \ should be printed.
* The diagonal should end with a newline
* if n is 0 or less, the function should only print newline
*
* Return: none.
*/
void print_diagonal(int n)
{
  int c;
  int d = n;

  if (n > 0)
  {
    while (n > 0)
    {
      c = d - n;
      while (c >= 0)
      {
        _putchar(' ');
        c--;
      }
      _putchar('\\');
      _putchar('\n');
      n--;
    }
  }
  else
  {
    _putchar('\n');
  }
}
