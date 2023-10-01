#include "main.h"

/**
 * _sqrt_recursion - return the natural square root
 * @n: int number
 * Return: If no natural square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_fun(int n, int sq);

	int sq = 1;

	return (sqrt_fun(n, sq));
}

/**
 * sqrt_fun - function to solve _sqrt_recursion
 * @sq: number to determine square root
 * @n:  number
 * Return: square root if natural 
 */

int sqrt_fun(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
