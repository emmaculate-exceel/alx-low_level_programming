#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiply code
 * @argc: count
 * @argv: vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul1;
	int mul2;
	int result;

	if(argc == 3)
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);

		result = mul1 * mul2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
