#include <stdio.h>

/**
 * main - advance task 100
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
			putchar(i + '0');
			putchar(j + '9');
		{
			if (i == 8 && j == 9)
			{
				break;
			}
			putchar(',');
			putchar(' ');

		}
	}
}
