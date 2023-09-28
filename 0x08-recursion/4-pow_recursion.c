#include "main.h"
/**
 * _pow_recursion - base and power
 * @x: base value
 * @y: power value
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	int calc;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else if (y == 1)
	{
		return (x);
	}
	calc = x * _pow_recursion(x, y - 1);
	return (calc);
}

