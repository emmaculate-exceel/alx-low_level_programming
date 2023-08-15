#include <unistd.h>
#include <stdio.h>
/**
 * main - print the file name
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{	
	printf("%s\n", __FILE__);
	return (0);
}
