#include <stdio.h>
#include <unistd.h>
/**
 * main - unix style
 * Return:1
 */
int main(void)
{
	char quote[] = "and the piece of art is useful\" -Dora Korpar, 2015-10-19,\n";

	fprintf(stdout, quote);
	return (1);
}
