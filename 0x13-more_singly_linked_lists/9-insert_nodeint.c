#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at nth position
 * @head: pointer to first node
 * @idx: index position to add
 * @n: integer to be added
 *
 * Return: new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp_node = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !*head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; tmp_node && i < idx; i++)
	{
		if (i < idx - 1)
		{
			new_node->next = tmp_node->next;
			tmp_node->next = new_node;
			return(new_node);
		}
		else
			tmp_node = tmp_node->next;
	}

	if (i == idx - 1)
		return (new_node);
	else
		return (NULL);
}
