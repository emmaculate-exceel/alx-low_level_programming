#include 'search_algos.h'
/**
 * linear_search - function for searching linearly
 * @array: the arrays of element to search
 * @size: the size of element to search
 * @value: the value being searched for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t sum;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
