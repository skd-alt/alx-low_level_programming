#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: key inputted
 * @size: size of hash table.
 *
 * Return: index of key value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
