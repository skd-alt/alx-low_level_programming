#include "lists.h"

/**
 * pop_listint - removes head node of list
 * @head: double pointer
 *
 * Return: n in head node deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int num;

	num = (*head)->n;

	if (head == NULL || *head == NULL)
		return (0);

	tmp_node = (*head)->next;
	free(*head);
	*head = tmp_node;
	return (num);
}
