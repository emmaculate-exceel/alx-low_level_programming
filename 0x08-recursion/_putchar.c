#include <unistd.h>
/**
 * main - putchar function
 * write: to the file
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
