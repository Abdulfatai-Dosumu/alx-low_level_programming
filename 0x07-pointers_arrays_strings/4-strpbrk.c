#include "main.h"

/**
* _strpbrk - this function locates the first occurrence in the string s
* of any of the bytes in the string accept. It searches a string for
* any set of bytes.
* @s: the string
* @accept: the reference string.
*
* Return: an address to the bytes in s that matches one of the bytes
* in accept, or NULL if no such byte
*/
char *_strpbrk(char *s, char *accept)
{
  int i, j;
  
  j = 0;
  i = 0;
  while (s[i] != '\0')
  {
    while (accept[j] != '\0')
    {
      if (s[i] == accept[j])
        return (s + i);
      j++;
    }
    j = 0;
    i++;
  }
  return (NULL);
}

