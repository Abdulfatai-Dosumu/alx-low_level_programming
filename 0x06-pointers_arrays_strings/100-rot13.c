#include "main.h"

/**
* rot13 - encodes a string using rot13.
* Basically this encoding replaces a letter with the letter
* 13 steps behind in it in the alphabets.
* E.g. R becomes E.
* @s: the string to be encoded
*
* Return: the encoded string, s
*/
char *rot13(char *s)
{
  char *alp = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
  int i = 0;
  int j = 0;

  while (s[i] != '\0')
  {
    while (alp[j] != '\0')
    {
      if (s[i] == alp[j])
      {
        s[i] = rot[j];
        break;
      }
      j++;
    }
    j = 0;
    i++;
  }

  return (s);
}
