#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 t0 14,
* followed by a new line.
*
* Return: none
*/
void more_numbers(void)
{
  int count = 0;
  int a = 0;

  while (count < 10)
  {
    while (a < 15)
    {
      if (a > 9)
      {
        _putchar((a / 10) + '0');

      }

      _putchar((a % 10) +'0');
      a++;
    }
    a = 0;
    count++;
    _putchar('\n');

  }
  }
