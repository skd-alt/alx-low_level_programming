#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: pointer of a pointer to the next node
 * @str: string to be copied to node
 *
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int l = 0;

	while (str[l])
		l++;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str =  strdup(str);
	temp->len = l;
	temp->next = *head;
	*head = temp;

	return (*head);
}
