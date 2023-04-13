#include <stdlib.h>

/**
 * _calloc - allocates memory of an array using malloc.
 * @nmemb: number of elements in array.
 * @size: size of elements in array.
 *
 * Return: NULL if size or nmemb == 0.
 * NULL if malloc fails.
 * Pointer to memory allocated if Successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(ptr) + i) = 0;
	}

	return (ptr);
}
