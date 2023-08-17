#include "lists.h"

/**
 * get_dnodeint_at_index - return element at node n
 * @head: pointer to head
 * @index: nth element
 *
 * Return: nth element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int num = 0;

	temp = head;

	while (temp)
	{
		if (num == index)
			return (temp);
		temp = temp->next;
		num++;
	}

	return (NULL);
}
