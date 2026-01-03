#include "main.h"

/**
* _strncat - concatenates a string src to another string dest.
* it will use at most n byte from src, and src does not need to be
* null terminated if it contains n or more bytes.
* @dest: the destination string
* @src: the source string
* @n: the number of bytes to be concatenated.
*
* Return: none.
*/
char* _strncat(char *dest, char *src, int n)
{
  int count = 0;
  int leng = 0;

  while (dest[leng] != '\0')
  {
    leng++;
  }

  while ((count < n) && (src[count] != '\0'))
  {
    dest[leng] = src[count];
    leng++;
    count++;
  }

  dest[leng] = '\0';
  return (dest);
}
