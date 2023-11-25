#include "main.h"

/**
* jack_bauer - prints to the output every
* minutes of the day
*
* Return: Always Nothing.
*/
void jack_bauer(void)
{
	int i, x, y, z;

	for (i = 0; i < 3; i++)
	{
		for (x = 0; x < 4; x++)
		{
			for (y = 0; y < 6; y++)
			{
				for (z = 0; z < 10; z++)
				{
					if (!(i == 2 && x == 3 && y == 5 && z == 99))
					{
						_putchar(i + 48);
						_putchar(x + 48);
						_putchar(':');
						_putchar(y + 48);
						_putchar(z + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
