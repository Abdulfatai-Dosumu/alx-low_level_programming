#include "main.h"

/*
* cap_string - This is a function that capitalize all the words of a string.
* @c: the string
*
* Return: c
*/
char *cap_string(char *c)
{
  int i = 1;
  char *sep = " .,\n\t\";?!(){}";
  int j = 0;

  while (c[i] != '\0')
  {
    while (sep[j] != '\0')
    {
      if ((c[i] >= 97 && c[i] <= 123 && (c[i - 1] == sep[j])))
      {
        c[i] -= 32;
        j++;
      }
      j++;
    }
    j = 0;
    i++;
  }
  return (c);
}
