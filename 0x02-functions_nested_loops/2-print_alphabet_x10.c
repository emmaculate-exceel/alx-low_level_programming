#include "main.h"
/**
 * print_alphabet_x10 - a to z
 * Return:0
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

		_putchar('\n');
	};
}

