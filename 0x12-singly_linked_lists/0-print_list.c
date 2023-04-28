#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all of the Elements in a list
 * @h: is a pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
