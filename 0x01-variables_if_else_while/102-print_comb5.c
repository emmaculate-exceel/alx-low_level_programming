#include <stdio.h>

/**
 * main - check code 102
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 1; b <= 99; b++)
		{
			if (b > a)
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
