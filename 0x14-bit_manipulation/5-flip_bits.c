#include "main.h"

/**
 * flip_bits - change bits.
 * @n: first digit
 * @m: second digit
 *
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int con;
	unsigned long int x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		con = x >> i;
		if (con & 1)
			counter++;
	}

	return (counter);
}
