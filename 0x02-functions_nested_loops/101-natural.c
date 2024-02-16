#include "main.h"
/**
  * main - print a total sum of 3 and 5
  * all the way down to 1024
  *
  * Return: Always 0
  */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum += i;
		}
		else if ((i % 5) == 0)
		{
			sum += i;
		}
		else if ((i % 3) == 0 && (i % 5) == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
	return 0;
}
