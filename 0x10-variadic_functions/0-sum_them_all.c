#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - add all parameter
 * @n: calculate the function
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list arg;

	va_start(arg, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);
	return (sum);
}
