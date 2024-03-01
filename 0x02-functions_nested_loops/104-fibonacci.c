#include "main.h"
/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: always 0;
 */

int main(void)
{
	unsigned long int i, a = 1, b = 2, count;

	printf("%lu, %lu, ", a, b);
	for (count = 3; count < 99; count++)
	{
		count = a + b;
		if (count < 98)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu\n");
		}
		a = b;
		b = count;
	}
	return (0);
}
