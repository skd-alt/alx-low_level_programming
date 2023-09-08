#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value linked to the key
 * @ht: pointer to hash table
 * @key: key to be used
 *
 * Return: value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	if (key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);

	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
