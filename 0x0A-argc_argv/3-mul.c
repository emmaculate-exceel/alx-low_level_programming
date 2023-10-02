#include <stdio.h>
#include <stdlib.h>
/**
 * main - function args for multiplication
 * @argc: argument count 
 * @argv: argument values
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int mul1, mul2, result;

	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);
	result = mul1 * mul2;
	printf("%d\n", result);
	return (0);
}
