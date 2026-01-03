#include "main.h"

/**
* _strncpy -fill a fixed-size buffer with none null bytes from
* a string, padding with null bytes as needed.
* @dest: the destination string
* @src: the source string
* @n: an integer representing the number of bytes to be copied.
*
* Return: dest.
*/
char* _strncpy(char *dest, char *src, int n)
{
  int count = 0;

 
  while (src[count] != '\0' && count < n)
  {
    dest[count] = src[count];
    count++;
  }
  
  while (count < n)
  {
    dest[count] = '\0';
    count++;
  }

  return (dest);
}
