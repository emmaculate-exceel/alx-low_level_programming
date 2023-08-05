#include <unistd.h>
/**
 * main - check code
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
