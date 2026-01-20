#include "main.h"

/**
 * checker -  checks if the first letter of a word is in a string.
 * @a: the string to be searched.
 * @b: the character to search for.
 * 
 * Return: the index of the first letter of the word in a.
 */
int checker(char *a, char b)
{
  int i;

  i = 0;
  while (a[i] != b)
  {
    if (a[i] == b)
      return (i);
  }
  i++;
  return (-1);
}
/**
* _strstr - locates a substring
* This function finds the first occurrence of the substring needle in the
* string haystack. The terminating null bytes (\0) are not compared.
* @haystack: the string to search in.
* @needle: the substring to search for.
*
* Return: the pointer to the beginning of the located substring, or NULL if the
* substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
  int i, j, k;

  i = 0;
  j = 0;
  while (haystack[i] != '\0')
  {
    while (needle[j] != '\0')
    {
      if (haystack[i] == needle[j])
      {
        if (haystack[i] == needle[0])
        {
          k = i;
        }
        i++;
        j++;
      }
      else
      {
        j = 0;
        i++;
      }
    }
    j = 0;
    i++;
  }
  return (haystack + k);
}
