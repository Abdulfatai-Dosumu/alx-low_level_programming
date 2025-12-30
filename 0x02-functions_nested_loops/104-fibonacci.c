#include <stdio.h>

/**
* fibonacci - prints the first 50 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: none.
*/
void fibonacci(void)
{
  float i = 1;
  float j = 2;
  float k,n = 0;


  printf("%.0f, ", i);
  while (n < 98){
    printf("%.0f, ", j);
    k = i + j;
    i = j;
    j = k;
    n++;
  }
  printf("\n");
}

/**
* main - Entry point
*
* Return: Always 0 (success).
*/
int main(void)
{
  fibonacci();
  return (0);
}
