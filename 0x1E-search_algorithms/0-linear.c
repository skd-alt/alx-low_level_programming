#include "search_algos.h"

/**
 * linear_search - mimicks linear search algorithm
 * @array: inputted array
 * @size: number of elements in the array
 * @value: is the value to search for
 *
 * Return: index where value first found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
