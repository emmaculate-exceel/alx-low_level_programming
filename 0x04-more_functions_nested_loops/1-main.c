#include "main.h"
#include <stdio.h>
/**
 * main - check the code 
 * Return: 0
 */
int main(void)
{
	char c = '0';

	printf("%c: %d\n", c, _isdigit(c));

	c = 'a';

	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}

