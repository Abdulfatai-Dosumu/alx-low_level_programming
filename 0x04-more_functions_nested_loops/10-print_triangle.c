#include "main.h"

/**
* print_triangler - prints a triangle using #, followed by a new line.
* @size: the size of the square
* if size is 0 or less, print a new line.
*
* Return: none.
*/
void print_triangle(int size)
{
  int count = 1;
  int n = size - count;
  int d = 1;

  if (size > 0)
  {
    while (count <= size)
    {
      while (n > 0)
      {
        _putchar(' ');
        n--;
      }
      while (d > 0)
      {
        _putchar('#');
        d--;
      }
      _putchar('\n');
      count++;
      n = size - count;
      d = size - n;
    }
  }
  else
  {
    _putchar('\n');
  }
}
