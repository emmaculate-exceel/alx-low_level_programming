#include <unistd.h>
/**
 * main - putchar
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
