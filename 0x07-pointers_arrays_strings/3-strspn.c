#include "main.h"

/**
 * _init - checks if a letter is in a particular string.
 * @l: the character to check.
 * @accept: the string.
 *
 * Returns: 1 if True and 0 if false.
 */
int _is(char l, char *accept)
{
  int m = 0;
  int result = 0;

  while (accept[m] != '\0')
  {
    if (l == accept[m])
    {
      result += 1;
      break;
    }
    else
    {
      result += 0;
      m++;
    }
  }
  return (result);
}

/**
* _strspn - gets the length of a prefix substring.
* @s: the string to search.
* @accept: a string
*
* Return: the number of bytes in the initial segment of s which consist
* only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
  int i;
  unsigned int l, j;

  i = 0;
  j = 0;
  l = 0;
  while (s[i] != '\0')
  {
    l = _is(s[i], accept);

    if (l == 0)
    {
      break;
    }
    j++;
    i++;
  }
  return (j);
}
