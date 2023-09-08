#include <stdlib.h>
#include "hash_tables.h"

/**
 * free_hash_node - deletes a hash node from memory
 * @node: the node to free
 *
 * Return: void
 */
void free_hash_node(hash_node_t *node)
{
	if (node == NULL)
		return;
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - deletes a hash table object
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr = NULL, *next = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			next = curr->next;
			free_hash_node(curr);
			curr = next;
		}
	}
	free(ht->array);
	free(ht);
}
