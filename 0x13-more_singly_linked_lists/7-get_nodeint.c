#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: pointer to first node
 * @index: nth element
 *
 * Return: nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp_node = head;

	while (tmp_node && i < index)
	{
		tmp_node = tmp_node->next;
		i++;
	}

	return (tmp_node ? tmp_node : NULL);
}
