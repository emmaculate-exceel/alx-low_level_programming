#include "main.h"
/**
 * main - do the sum of fibonacci terms
 *
 * Return : Always 0;
 */

int main(void)
{
  long int i, a = 0, b = 1, c, sum;

  for (i = 1; i < 34; i++)
    {
      if (i % 2 == 0)
	{
	  sum = sum + 1;
	}
      a = b;
      b = c;
      c = a + b;
    }
  printf("%ld\n", sum);
  return (0);
}
