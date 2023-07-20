#include "main.h"
/**
 * _isalpha - is a function that checks for alphabetic character
 * @c: caller for alphabet
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);
}
