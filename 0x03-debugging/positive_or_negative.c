#include <stdio.h>
#include "main.h"
/**
 * main - function for positive and negative val
 * @i: positive_or_negative(int i)
 * Return: 0
 */

int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is postive", i);

	else if (i == 0)
		printf("%d is zero", i);

	else
		printf("%d is negative", i);

	return (0);
}

