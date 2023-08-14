#include <stdio.h>

/**
 * main - check code 102
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			printf("%02d %02d",i ,j);
		}
	}

	putchar('\n');

	return (0);
}
