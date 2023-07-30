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
		putchar(i);

		for (j = 0; j <= 9; j++)
		{
			if (i == 8 && j == 9)
				break;
			
			putchar(j);

		}
	}
}
