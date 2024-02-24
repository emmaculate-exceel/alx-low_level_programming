#include <stdio.h>
/**
 * fibonacci - executes the fibonacci function
 *        write a code that runs fibonacci numbers
 * Return: Always 0;
 */

void fibonacci(void)
{
	int a, b = 1, c = 1, i;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", c);

		a = b;
		b = c;
		c = a + b;
	}
	printf("\n");
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
