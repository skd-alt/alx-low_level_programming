#include "lists.h"

/**
 * insert_dnodeint_at_index - insert element at nth node
 * @h: double pointer to head
 * @idx: nth element
 * @n: int dat to be added
 *
 * Return: new element or Null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *temp2;
	unsigned int num = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		temp = *h;
		new_node->n = n;
		new_node->next = *h;
		new_node->prev = NULL;
		temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;

	while (temp)
	{
		if (num == idx - 1)
		{
			new_node->n = n;
			new_node->next = temp->next;
			new_node->prev = temp;
			temp2 = temp->next;
			temp->next = new_node;
			temp2->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		num++;
	}

	return (NULL);
}
