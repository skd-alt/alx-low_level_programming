#include "lists.h"

/**
 * free_dlistint - frees a double list
 * @head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
