#include "main.h"

/**
* _memset - fills the first n bytes of the memory area pointer to by
* s with the constant byte b.
* @s: The memory area, a string.
* @b: the the memory to print.
* @n: the bytes to fill.
*
* Return: a pointer to the memory area, s.
*/
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (i < n)
  {
    s[i] = b;
    i++;
  }
  return (s);
}
