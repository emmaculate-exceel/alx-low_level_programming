#include "main.h"
/**
 * _abs - return absolute num
 * @n: absolute value
 *
 * Return: Always n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(-n);
	}
	return (n);
}
