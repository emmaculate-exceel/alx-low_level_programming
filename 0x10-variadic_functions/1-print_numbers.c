#include <strarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers 
 * @seperator: seperate
 * @n : number count
 * Return: NULL
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	int i;
	int sum;

	va_list arg;
	
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{	
		sum = va_arg(arg, int);
		if (i < (n -1) && seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	va_end(arg);
}
