#include "main.h"
/**
 *Print_times_table - print time table nth time
 *@n: number of times for the rows and the column
 *
 *Return: Void
 */

void print_times_table(int n)
{
  int mul, row, col;

  for (col = 1; col < n; col++)
    {
      for (row = 1; row < n; row++)
	{
	  mul = row * col;

	  if (mul < 10 && row != 0)
	    {
	      _putchar(mul + 48);
	      _putchar(44);
	      _putchar(32);
	    }
	}
    }
}
