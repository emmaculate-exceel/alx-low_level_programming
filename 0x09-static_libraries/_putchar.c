#include "main.h"
#include <unistd.h>
/**
 * _putchar - putchar
 * @c: write to output
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
