#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at the end of list
 * @head: pointer to list
 * @str: string to be copied
 *
 * Return: address of node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = l;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
