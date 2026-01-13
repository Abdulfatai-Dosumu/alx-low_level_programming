#include "main.h"

/**
* _memcpy - copies n bytes from memory area src to memory area dest.
* @dest: the address of memory to print to.
* @src: the address of the memory to copy from.
* @n: the number of bytes to copy.
*
* Return: the address to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
  unsigned int i;

  i = 0;
  while (i < n)
  {
    dest[i] = src[i];
    i++;
  }
  return (dest);
}
