#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - addittional plus
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int p1;
	int p2;
	int result;

	p1 = atoi(argv[1]);
	p2 = atoi(argv[2]);
	result = p1 + p2;
	if (argc == 3)
	{
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
