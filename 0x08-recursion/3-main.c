#include "main.h"
/**
 * main - check the code 3
 * Return: 0
 */

int main(void)
{
	int r;

	r = factoral(1);
	printf("%d\n", r);
	r = factoral(5);
	printf("%d\n", r);
	r = factoral(10);
	printf("%d\n", r);
	r = factoral(-1024);
	printf("%d\n", r);

	return (0);
}
