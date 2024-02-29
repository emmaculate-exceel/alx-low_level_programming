#include "main.h"
/**
 * fibonacci- do the sum of fibonacci terms
 * @n: value to be passed
 * Return: Always 0;
 */

int fibonacci(unsigned long int n)
{
	unsigned long int i, a = 0, b = 1, c, sum;

	for (i = 1; i < n; i++)
	{
		if (c % 2 == 0)
		{
			sum += c;
		}
	a = b;
	b = c;
	c = a + b;
	}
	printf("%lu\n", sum);
	return (0);
}

/**
 *main - main function for the code
 *
 *Return: always 0;
 */
int main(void)
{
	fibonacci(33);
	return (0);
}
