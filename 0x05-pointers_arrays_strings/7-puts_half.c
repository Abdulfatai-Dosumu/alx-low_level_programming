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
* puts_half - prints half of a string, followed by a new line.
* It prints the second half of the string.
* If the number of characters is odd, the function should print the
* last n characters. n = (length_of_the_string - 1) / 2.
* @str: a pointer to the string.
* 
* Return:none
*/
void puts_half(char *str)
{
  int i, length_of_the_string;
  int n;

  length_of_the_string = str_len(str);
  if (length_of_the_string % 2 != 0)
  {
    n = ((length_of_the_string - 1) / 2) + 1;
  }
  else
  {
    n = (length_of_the_string) / 2;
  }

  i = n;
  while (str[i] != '\0')
  {
    _putchar(str[i]);
    i++;
  }
  _putchar('\n');
}


