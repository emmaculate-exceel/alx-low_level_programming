#include "main.h"

/**
 * swap_int - swaping int
 * @a: change
 * @b: replace
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
