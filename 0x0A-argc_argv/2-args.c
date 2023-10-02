#include <stdio.h>
#include <stdlib.h>
/**
 * main - function for argv and argc
 * @argv: argument vector
 * @argc: argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{	
		printf("%s\n", argv[i]);
	}
	return (0);
}
