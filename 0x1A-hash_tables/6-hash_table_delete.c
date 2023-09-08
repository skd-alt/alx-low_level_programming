#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: pointer to the table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *temp_n;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while ((temp_n = temp) != NULL)
		{
			temp = temp->next;
			free(temp_n->key);
			free(temp_n->value);
			free(temp_n);
		}
	}
	free(ht->array);
	free(ht);
}
