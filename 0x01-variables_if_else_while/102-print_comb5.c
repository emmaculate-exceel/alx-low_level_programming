#include <stdio.h>

/**
 * main - perform a numeric order of digits
 * starting from 00:00 to 98:99
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 1; b <= 99; b++)
		{
			if (a !=  > b)
			{
				putchar ('0' + (a / 10));
				putchar ('0' + (a % 10));
				putchar (' ');
				putchar ('0' + (b / 10));
				putchar ('0' + (b % 10));
				if (a != 98 && b != 99)
				{
				putchar (',');
				putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
