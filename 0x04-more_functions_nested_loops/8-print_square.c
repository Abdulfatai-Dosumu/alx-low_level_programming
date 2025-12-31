#include "main.h"

/**
* print_square - prints a square using #, followed by a new line.
* @size: the size of the square
* if size is 0 or less, print a new line.
*
* Return: none.
*/
void print_square(int size)
{
  int count = 0;
  int n = size;
  if (size > 0)
  {
    while (count < size)
    {
      while (size > 0)
      {
        _putchar('#');
        size--;
      }
      _putchar('\n');
      count++;
      size = n;
    }
  }
  else
  {
    _putchar('\n');
  }
}
