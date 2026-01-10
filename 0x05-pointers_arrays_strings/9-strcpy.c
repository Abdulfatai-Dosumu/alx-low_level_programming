#include "main.h"

/**
* _strlen -  calculates the length of a string.
*
* @s: a pointer to a string.
*
* Return: an integer.
*/
int str_len(char *s)
{
  int k = 0;
  while (s[k] != '\0')
    k++;
  return (k);
}

/**
* _strcpy - copies the string pointed to by src, including the
* terminating null byte (\0), to the buffer pointed to by dest.
* @dest: the buffer.
* @src: the string to copies.
*
* Return: dest.
*/
char *_strcpy(char *dest, char *src)
{
  int i;
  int n;

  n = str_len(src);
  i = 0;
  while (i <= n)
  {
    dest[i] = src[i];
    i++;
  }
  return (dest);
}
