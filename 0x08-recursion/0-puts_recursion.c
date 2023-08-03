#include "main.h"

/**
 * _puts_recursion - check the code 1
 * @s: character
 * Return: void
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
