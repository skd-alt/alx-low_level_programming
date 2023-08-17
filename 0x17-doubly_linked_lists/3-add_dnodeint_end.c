#include "lists.h"

/**
 * add_dnodeint_end - add new element at the end of list
 * @head: double pointer to head
 * @n: int data to add
 *
 * Return: new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}
