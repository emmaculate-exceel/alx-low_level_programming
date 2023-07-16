#include <stdio.h>
/**
 * main - size of bytes on a system
 * Return:0 (success)
 */
int main(void)
{
	char b;
	int a;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zu byte(s) \n", sizeof(b));
	printf("Size of a int: %zu byte(s) \n", sizeof(a));
	printf("Size of a long int: %zu byte(s) \n", sizeof(c));
	printf("Size of a long long int: %zu byte(s) \n", sizeof(d));
	printf("Size of a float: %zu byte(s) \n", sizeof(e));
	return (0);
}
