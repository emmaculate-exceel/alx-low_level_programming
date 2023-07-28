#include "main.h"
#include <string.h>
/**
 * _strncat - concate strings
 * @dest: destination
 * @src: source
 * @n: number of value
 * Return:0
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
