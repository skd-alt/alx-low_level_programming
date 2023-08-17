#include "lists.h"

/**
 * dlistint_len - return number of elements
 * @h: pointer to head
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
