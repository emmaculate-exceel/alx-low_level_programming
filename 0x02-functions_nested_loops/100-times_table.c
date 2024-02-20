#include "main.h"
/**
 *print_times_table - print time table nth time
 *@n: number of times for the rows and the column
 *Return: Void
 */
void print_times_table(int n);
void print_times_table(int n)
{
	int mul, row, col;

	if (n > 15 || n < 0)
		return;
	for (col = 0; col <= n; col++)
	{
		for (row = 0; row <= n ; row++)
		{
			mul = row * col;
			if (row != 0)
			{
				_putchar(0x2C);
				_putchar(0x20);
			}
			if (mul < 100 && row != 0)
			{
				_putchar(0x20);
			}
			if (mul < 10 && row != 0)
			{
				_putchar(0x20);
			}
			if (mul < 10)
			{
				_putchar(mul + 48);
			}
			else if (mul < 100)
			{
				_putchar(mul / 10 + 48);
				_putchar(mul % 10 + 48);
			}
			else
			{
				_putchar((mul / 10) / 10 + 48);
				_putchar((mul / 10) % 10 + 48);
				_putchar((mul % 10) % 10 + 48);
			}
		}
		_putchar(0x0A);
	}
}
