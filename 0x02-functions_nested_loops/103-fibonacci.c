#include "main.h"
/**
 * fibonacci- do the sum of fibonacci terms
 * @n: value to be passed
 * Return : Always 0;
 */

int fibonacci(int n)
{
	long int i, a = 0, b = 1, c, sum;

	for (i = 1; i < n; i++)
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

/**
 *main - main function for the code
 *
 *Return : always 0;
 */

int main(void)
{
	fibonacci(4000000);

	return (0);
}
