#include "main.h"
/**
 * _strlen_recursion - check length of strings
 *
 * @s: strings
 * Return: n
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}
	n = 1 + _strlen_recursion(s + 1);
	return (n);
}
