#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * This program prints _putchar, followed by a new line.
 *
 * Return: Always 0 (success)
*/
int main(void)
{
  char c[] = "_putchar";
  int i = 0;

  /**Loops through the string and prints each letter
  * until it reach '\0'*/
  while (c[i] != '\0')
  {
    _putchar(c[i]);
    i++;
  }
  putchar('\n');
  return (0);
}
