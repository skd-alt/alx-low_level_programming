#include "lists.h"

/**
 * sum_listint - adds the int in list
 * @head: pointer to first node
 *
 * Return: sum or zero
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp_node = head;

	if (tmp_node == NULL)
		return (0);

	while (tmp_node)
	{
		sum += tmp_node->n;
		tmp_node = tmp_node->next;
	}

	return (sum);
}
