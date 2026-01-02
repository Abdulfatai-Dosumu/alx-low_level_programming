#include "main.h"

/**
* _srncmp - This funciton compares two string s1 and s2.
* @s1: first string
* @s2: second string
*
* Return: an integer.
*/
int _strcmp(char *s1, char *s2)
{
  if (s1 == s2)
    return (0);
  else if (s1 < s2)
  {
    return (-15);
  }
  else if (s1 > s2)
  {
    return (15);
  }
  return (0);
}
