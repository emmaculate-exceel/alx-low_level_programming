#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - integer index
 * @array: arr of int
 * @size: size of arr
 * @cmp: function pointer
 * Return: -1 , count, return 0 base on certain conditions
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}

	return (-1);
}
