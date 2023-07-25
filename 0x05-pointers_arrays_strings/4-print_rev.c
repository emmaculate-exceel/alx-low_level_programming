#include "main.h"

/**
 * print_rev - reverse
 * @str: string
 * Return: 0
 */

void print_rev(char *str)
{
	int leng;

	leng = 0;

	while (str[leng] != '\0')
	{
		leng++;
	}
	leng--;
	while (leng >= 0)
	{
		_putchar(str[leng]);
		leng--;
	}

	_putchar('\n');

}
