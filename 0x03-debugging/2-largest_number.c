#include "main.h"
/**
 * largest_number - returns the largest of numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (!(a > b && b > c))
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = a;
	}

	return (largest);

}
