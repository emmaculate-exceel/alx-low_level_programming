#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the total of a number
 * @n: number of arguments
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int total = 0;
	va_list list;

	if (n == 0)
	{
	return (0);
	}
	va_start(list, n);

	for (count = 0; count < n; count++)
	{
	total += va_arg(list, int);
	}
	va_end(list);

	return (total);
}
