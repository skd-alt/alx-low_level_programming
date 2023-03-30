#include "main.h"

/**
 * reverse_array - function that reverses content of array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int tmp, index, j;

	index = n / 2
	for (j = 0; j < index; j++)
	{
		tmp = a[j];
		a[n - 1 - j] = a[j];
		a[j] = tmp;
}
