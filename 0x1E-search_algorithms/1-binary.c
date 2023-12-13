#include "search_algos.h"

/**
 * half_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 *
 * @array: array input
 * @size: array size
 * @value: search value
 * Return: index of search result
 */
int half_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (half_search(array, half, value));

	half++;

	return (half_search(array + half, size - half, value) + half);
}


/**
 * binary_search - mimicks binary search algorithm
 * @array: inputted sorted array
 * @size: number of elements in the array
 * @value: is the value to search for
 *
 * Return: index where value first found or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = half_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
