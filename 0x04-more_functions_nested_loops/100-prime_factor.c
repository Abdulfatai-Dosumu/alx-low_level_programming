#include <stdio.h>

/**
  * prime_factors - prints all the prime factors of a number n.
  * @n - the number
  *
  * Return: none.
*/
void prime_factors(long long n)
{
  long long largest;
  long long i = 1;

  while (n % 2 == 0)
  {
    largest = 2;
    n /= 2;
  }

  for (long long j = 3; j * j <= n; j+=2)
  {
    if (n % j == 0)
    {
      largest = j;
      n /= j;
    }
  }

  if (n > 2)
  {
    largest = n;
  }
  printf("%lld \n", largest);
}

int main(void)
{
  prime_factors(612852475143LL);
  return (0);
}
