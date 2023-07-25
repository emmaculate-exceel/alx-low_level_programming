#include <unistd.h>
/**
 * main - write the character c to stdout
 * Return: 0;
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
