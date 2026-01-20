#include "main.h"

/**
* print_chessboard - The function prints the chessboard.
* @(*a) - 
*
* Return: none.
*/
void print_chessboard(char (*a)[8])
{
  int i, j;

  i = 0;
  j = 0;
  while (i < 8)
  {
    while (j < 8)
    {
      _putchar(a[i][j]);
      j++;
    }
    _putchar('\n');
    j = 0;
    i++;
  }
}
