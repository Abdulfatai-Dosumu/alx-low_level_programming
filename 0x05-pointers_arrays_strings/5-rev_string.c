#include "main.h"
#include <stdio.h>

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
* rev_string - reverses a string.
* @s: the string to reverse.
*
* Return: none.
*/
void rev_string(char *s)
{
  char a, b;
  int j = str_len(s) - 1;
  int i = 0;

  while (i <= j/2)
  {
    a = s[i];
    b = s[j - i];
    s[i] = b;
    s[j - i] = a;

    i++;
  }
  s[j + 1] = '\0';
}
