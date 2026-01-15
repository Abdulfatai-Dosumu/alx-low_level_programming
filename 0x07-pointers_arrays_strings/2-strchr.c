#include "main.h"

/**
* _strchr - locates a character in a string.
* It returns a pointer to the first occurrence of the character
* c in the string s, or NULL if the character is not found
* @s: The string to be searched.
* @c: The string to search for in s.
*
* Return: the address of the first occurrence of the character c.
*/
char *_strchr(char *s, char c)
{
  int i;

  for (i = 0; s[i] >= '\0'; i++)
  {
    if (s[i] == c)
    {
      return (s + i);
    }
  }
  return (NULL);
}
