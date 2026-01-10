#include "main.h"

/**
* print_rev - prints a string, in reverse,
* followed by a new line.
* @s: a pointer to a string.
*
* Return: none.
*/
void print_rev(char *s)
{
  int i;

  i = _strlen(s);
  while (i >= 0)
  {
    _putchar(s[i]);
    i--;
  }
  _putchar('\n');
}

/**
* _strlen -  calculates the length of a string.
*
* @s: a pointer to a string.
*
* Return: an integer.
*/
int _strlen(char *s)
{
  int i = 1;
  while (s[i] != '\0')
    i++;
  return (i);
}
