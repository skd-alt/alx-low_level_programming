#include "lists.h"

/**
 * delete_nodeint_at_index - deletes at index
 * @head: double pointer
 * @index: index of the node that should be deleted
 *
 * Return: 1 success or -1 failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_node = *head;
	listint_t *del_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp_node->next;
		free(tmp_node);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp_node || !(tmp_node->next))
			return (-1);
		tmp_node = tmp_node->next;
		i++;
	}

	del_node = tmp_node->next;
	tmp_node->next = del_node->next;
	free(del_node);

	return (1);
}
