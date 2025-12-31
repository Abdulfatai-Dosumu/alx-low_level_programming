#include "main.h"

/**
* print_mosot_numbers - print the numbers 0 to 9 except 2 and 4,
* followed by a new line.
* 
* Return: none
*/
void print_most_numbers(void)
{
  int i = 0;

  while (i < 10)
  {
    if ((i != 2) && (i != 4))
    {
      _putchar(i + '0');
      i++;
    }
    else
    {
      i++;
    }
  }
  _putchar('\n');
}
