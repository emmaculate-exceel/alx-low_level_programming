#include "main.h"
#include <string.h>

/**
 * rev_string - reverse data
 * @s: subject
 * Return: 0
 */

void rev_string(char *s)
{
	int start = 0;
	int length = strlen(s);
	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = s[length];
		s[length] = temp;

		start++;
		end--;
	}
}
