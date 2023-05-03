#include "lists.h"

/**
 * free_listint - frees list of int
 * @head: pointer to first node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp_node;

	while (head)
	{
		tmp_node = head->next;
		free(head);
		head = tmp_node;
	}

}
