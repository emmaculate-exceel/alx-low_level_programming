#include <stdio.h>
/**
 * fibonacci - executes the fibonacci function
 *        write a code that runs fibonacci numbers
 * Return: Always 0;
 */

void fibonacci(void)
{
	int a, b = 1, c = 1;

	for (a = 0; a < 50; a++)
	{
		printf("%d, \n", c);

		a = b;
		b = c;
		c = a + b;
	}
}

/**
 * main - executes the fibonacci function
 *
 * Return: Always 0;
 */

int main(void)
{
	fibonacci();

	return (0);
}
