#include <stdio.h>
#include <stdlib.h>
/**
 * main - function args for multiplication
 * @argc: argument count
 * @argv: argument values
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int mul1, mul2, result;
	if(argc > 2)
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);
		result = mul1 * mul2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
