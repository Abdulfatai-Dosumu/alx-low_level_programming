#include "main.h"

/**
* print_number - prints an integer.
* @n : the integer
*
* Return: none
*/
void print_number(int n)
{
  int power = 1;
  int p = 0;
  int q = 0;
  int a = n;

  if (n > 0)
  {
    while (n / 10 > 0)
    {
      power *= 10;
      n = n / 10;
    }

    while (power >= 1)
    {
      if (a < 10 && power == 1)
      {
        _putchar((a % 10) + '0');
        break;
      }
      else
      {
        p = a / power;
        _putchar(p + '0');
        q = p * power;
        a = a - q;
        power = power / 10;
      }
    }
  }

  else if (n < 0)
  {
    _putchar('-');
    n = -1 * n;
    print_number(n);
  }

  else
  {
    _putchar(0 + '0');
  }
}
