#include "hash_tables.h"

/**
 * add_h_node - adds a node at the beginning of hash index
 * @h: head of list
 * @key: key
 * @value: value to be inputted
 *
 * Return: head of list
 */

hash_node_t *add_h_node(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = *h;

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*h);
		}
		temp = temp->next;
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (NULL);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;
	*h = temp;

	return (*h);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table pointer
 * @key: is the key
 * @value: is the value being entered
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);

	if (add_h_node(&(ht->array[idx]), key, value) == NULL)
		return (0);

	return (1);
}
