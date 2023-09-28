#include "main.h"
/**
 * factorial - Factorial of a number
 * @n: Number of factorial
 * Return: num
 */

int factorial(int n)
{
	int num;

	if (n < 0)
		return (-1);
	else if (n < 1 || n < 0)
		return (1);
	num = n * factorial(n - 1);
	return (num);
}
