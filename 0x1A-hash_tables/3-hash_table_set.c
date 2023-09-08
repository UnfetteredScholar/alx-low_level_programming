#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_hash_node - creates a hash node
 * @key: the key
 * @value: the value
 *
 * Return: pointer to the node else NULL
 */
hash_node_t *create_hash_node(const char *key,const char *value)
{
	hash_node_t *new  = NULL;

	if (!key || !value || key[0] == '\0')
                return (NULL);

        new = malloc(sizeof(hash_node_t));
        if (!new)
        {
                return (NULL);
        }
        new->key = strdup(key);
        new->value = strdup(value);
	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer to the hash table
 * @key: the key to be added
 * @value: the value to be added
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new = create_hash_node(key, value);
	if (!new)
	{
		return (0);
	}
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	ht->array[index] = new;

	return (0);
}

