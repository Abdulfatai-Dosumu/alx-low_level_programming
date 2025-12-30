#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0.
*
* Returns: None.
*/
void times_table(void)
{
  int i = 0;
  int j = 0;
  int k = 0;

  while (i < 10)
  {
    while (j < 10)
    {
      k = i * j;

      /*print format logic*/
      if ((k == 0) && (j == 0))
      {
      _putchar(k + '0');
      }
      else if ((k > 0 && k < 10) || (i == 0 && j > 0))
      {
      _putchar(' ');
      _putchar(k + '0');
      }
      else if (k > 9)
      {
      _putchar((k / 10) + '0');
      _putchar((k % 10) + '0');
      }
      
      if (j != 9)
      {
        _putchar(',');
        _putchar(' ');
      }
      j++;
    }
    j = 0;
    i++;
    _putchar('\n');
  }
}
