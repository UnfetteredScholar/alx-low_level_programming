#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with a key
 * from a hash table
 * @ht: the hash table
 * @key: the key
 *
 * Return: the value else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];

	while (curr !=  NULL)
	{
		if (!strcmp(curr->key, key))
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}

