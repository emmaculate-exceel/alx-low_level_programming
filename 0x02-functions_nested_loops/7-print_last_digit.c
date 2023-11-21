#include "main.h"

/**
 * print_last_digit - print the last digit of an input value
 * @n: input value
 *
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = -x;
		_putchar(x + '0');
		return (x);
	}
	else 
	{
		_putchar(x + '0');
		return (x);
	}
}
