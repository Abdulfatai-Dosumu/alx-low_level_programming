#include "main.h"

/**
* _isupper - This function checks for uppercase character.
* @c: character to check
*
* Return: 1 if c is uppercase
*         0 otherwise
*/
int _isupper(int c)
{
  if (c <= 90 && c >= 65)
  {
    return (1);
  }
  return (0);
}
