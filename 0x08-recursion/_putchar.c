#include <unistd.h>
/**
 * _putchar - writes character to stdout
 *
 * @c: the character to be printed out.
 * Return: 1 on success 
 * Return: -1 on Error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
