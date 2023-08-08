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

	if (argc == 3)
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);
		printf("%d\n", mul1 * mul2);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
