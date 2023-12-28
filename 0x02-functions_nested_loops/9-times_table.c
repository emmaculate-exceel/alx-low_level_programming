#include "main.h"
/**
 *times_table - multiplication table
 *
 *Return: void
 */
void times_table(void)
{
	int mul, rows, cols;

	for (rows = 0; rows < 10; rows++)
	{
		for (cols = 0; cols < 10; cols++)
		{
			mul = cols * rows;

			if (cols != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul < 10)
			{
				_putchar(' ');
				_putchar(mul + 48);
			}
			else
			{
				_putchar(mul / 10 + 48);
				_putchar(mul % 10 + 48);
			}
		}
	_putchar('$');
	_putchar('\n');
	}
}
