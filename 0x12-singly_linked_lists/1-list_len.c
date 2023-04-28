#include <stdlib.h>
#include "lists.h"

/**
 * list_len - lists the legth of list
 * @h: is a pointer
 *
 * Return: size of list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
