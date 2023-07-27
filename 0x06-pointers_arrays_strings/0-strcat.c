#include "main.h"
#include <string.h>

/**
 * _strcat - custom function
 *@dest: concat string value
 *@src: concat string value
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	dest[7] = '\0';
	strcat(dest, src);

return (0);
}
