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

	if( n > 0 );
	{
		printf("is positive\n");
	}
		if else( n = 0 );
		{
			printf("is zero\n");
		}
		if else( n < 0);
		{
			printf("is negative\n");
		}
		else
		{
			printf("no match at all\n");
		}

	return (0);
