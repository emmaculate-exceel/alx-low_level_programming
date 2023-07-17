#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - varibles and if else
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is a negative number\n", n);
	}

	return (0);
}
