#include "main.h"
/**
 *print_line - print an horizontal line numbers of time
 *@n: numbers of time horizontal line will be printed
 *
 *Return: Always 0;
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(0x5F);
	}
	_putchar(0x0A);
}
