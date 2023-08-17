#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at n
 * @head: double pointer to head
 * @index: nth element
 *
 * Return: 1 for success and -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp_n, *temp_p;
	unsigned int num = 0;

	temp = *head;
	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		if (temp->next != NULL)
		{
			temp_n = temp->next;
			temp_n->prev = NULL;
			*head = temp_n;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (num == index)
		{
			temp_p = temp->prev;
			if (temp->next != NULL)
			{
				temp_n = temp->next;
				temp_p->next = temp_n;
				temp_n->prev = temp_p;
			}
			else
				temp_p->next = NULL;
			free(temp);
			return (1);
		}
		temp = temp->next;
		num++;
	}
	return (-1);
}
