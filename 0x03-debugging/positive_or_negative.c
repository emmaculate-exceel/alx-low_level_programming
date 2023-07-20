#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - post and neg val
 * @i: positive_or_negative(int i)
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is postive \n", i);

	else if (i == 0)
		printf("%d is zero \n", i);

	else
		printf("%d is negative \n", i);

}

