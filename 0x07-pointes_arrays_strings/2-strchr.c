#include "main.h"
/**
 * _strchr - change str 2
 * @s: first
 * @c: second
 * Return:0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return (s);
	}
	s++;
	}

	return (0);
}
