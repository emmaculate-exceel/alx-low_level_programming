#include "main.h"
/**
 * puts2 - check code
 * @c: checker
 * Return: 0
 */

void puts2(char *str)
{
	int c;

	c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c += 2;
	}
	_putchar(str[c]);
}
