#include "main.h"
/**
 * more_numbers - print 1 to 14
 *
 * Return: always 0;
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + 0x30);

			_putchar(i % 10 + 0x30);
		}

		_putchar(0x0A);
	}
}
