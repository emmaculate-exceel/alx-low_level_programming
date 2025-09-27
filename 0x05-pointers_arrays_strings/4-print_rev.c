#include "main.h"

/**
 * print_rev - reverse
 * @str: string
 * Return: 0
 */

void print_rev(char *str)
{
	int reverse;
	reverse = 0;

	while (str[reverse] != '\0')
	{
		str[reverse]++;
		printf("%c", str[reverse]);
	}
	while (str[reverse] == -1)
	{
		reverse--;
		printf("%c", str[reverse]);
	}
}
