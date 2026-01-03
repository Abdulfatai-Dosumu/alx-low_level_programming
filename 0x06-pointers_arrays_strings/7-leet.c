#include "main.h"

/**
* leet - encodes a string into 1337.
* Letters a and A should be replaced by 4
*Letters e and E should be replaced by 3
*Letters o and O should be replaced by 0
*Letters t and T should be replaced by 7
*Letters l and L should be replaced by 1
* @s: the string to encode
*
* Return: the string, s.
*/
char *leet(char *s)
{
  char *l = "aeotlAEOTL";
  char *c = "4307143071";
  int i = 0;
  int j = 0;

  while (s[i] != '\0')
  {
    while (l[j] != '\0')
    {
      if (s[i] == l[j])
      {
        s[i] = c[j];
        j++;
      }
      j++;
    }
    j = 0;
    i++;
  }
  return (s);
}
