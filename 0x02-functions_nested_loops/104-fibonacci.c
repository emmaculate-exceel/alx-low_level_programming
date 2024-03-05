#include "main.h"
#define INC 1000000000
/**
 * main - prints the first 98 fibonacci numbers
 * the use of long long is prohibitted
 * Return: always 0;
 */

int main(void)
{
	unsigned long int i, a = 1, b = 2, count;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i < 99; i++)
	{
		count = a + b;
		if (i < 98)
		{
			printf("%lu, ", count);
		}
		else
		{
			printf("%lu\n", count);
		}
		a = b;
		b = count;
	}
	return (0);
}
