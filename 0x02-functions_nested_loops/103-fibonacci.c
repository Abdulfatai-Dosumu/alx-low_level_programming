#include <stdio.h>

/**
* fibonacci - prints the first 50 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
*
* Return: none.
*/
void fibonacci(void)
{
  long i = 1;
  long j = 2;
  long k,n = 0;


  while (n < 50){
    if ((k % 2 ==0))
    {
      printf("%ld, ", j);
    }
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
