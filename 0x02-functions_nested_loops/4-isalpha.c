#include "main.h"

/**
 * _isalpha - This function checks for uppercase character.
 *
 * Return: 1 if c is a uppercase
 *         0 otherwise
*/
int _isalpha (int c)
{
  if ((c >= 65) && (c <= 90))
  {
    return (1);
  }
  return (0);
}
