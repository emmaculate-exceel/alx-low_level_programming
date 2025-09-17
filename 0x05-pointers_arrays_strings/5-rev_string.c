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
	int length = _putchar(s);
	int end = length - 1;

  char temp;
  while (start < end)
    {
      temp = s[start];
      s[start] = s[end];
      s[end] = temp;
      start++;
      end--;
    }
}
