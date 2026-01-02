#include "main.h"

int str_len(char *a)
{
  int i = 0;

  while (a[i] != '\0')
  {
    i++;
  }
  return (i);
}

/**
* _strcat - appends the src string to the dest string,
* overwriting the terminating null byte (\0), and
* then adds a terminating null byte.
* @dest: first string.
* @src: second string
*
* Return: a pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
  int i = str_len(dest);
  int t = 0;

  while (src[t] != '\0')
  {
    dest[i] = src[t];
    t++;
    i++;
  }
  dest[i] = '\0';

  return(dest);
}



