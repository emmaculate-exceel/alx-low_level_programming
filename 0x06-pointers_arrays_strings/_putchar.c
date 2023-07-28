#include <unistd.h>
/**
 * _putchar - write the character C to a file
 * @c: character file
 * On error, -1 is returned
 * Return:0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
