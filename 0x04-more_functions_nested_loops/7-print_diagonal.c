#include "main.h"
/**
 *print_diagonal - making diagonal lines using /
 *@n: number of times to print /
 *
 *Return; Always nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(0x20);
		}
		_putchar(0x5c);
		_putchar(0x0A);
	}

	_putchar(0x0A);
}
