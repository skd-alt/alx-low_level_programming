#include "lists.h"

/**
 * sum_dlistint - sum of all elements
 * @head: pointer to head
 *
 * Return: Sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
