#include "main.h"

/**
* string_toupper - changes all lowercase letters of a string to uppercase.
* @c: the 'all-lowercase' string
*
* Return: a string (all-uppercase)
*/
char *string_toupper(char *c)
{
  int i = 0;

  while (c[i] != '\0')
  {
    if ((c[i] >= 97) && (c[i] <= 123))
    {
      c[i] -= 32;
    }
    i++;
  }

  return (c);
}
