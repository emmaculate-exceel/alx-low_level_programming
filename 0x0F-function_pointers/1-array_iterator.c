#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function of array
 * @array: iteration count
 * @size: size of arr
 * @action: pointer function 
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int count;

	if (!action || !array)
		return;

	for (count = 0; count < size; count++)
		action(array[count]);
}
