#include <stdlib.h>
/**
  * malloc_checked - allocates.
  * @b: size of mem.
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
