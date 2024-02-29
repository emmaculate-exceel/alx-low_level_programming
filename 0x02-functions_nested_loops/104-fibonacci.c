#include "main.h"
/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: always 0;
 */

int main(void)
{
	unsigned long int i, a, b = 1, c = 1;

	for (i = 1; i < 99; i++)
	{
	    printf("%lu, ", c);
	    a = b;
	    b = c;
	    c = a + b;
	}
	return (0);
}
