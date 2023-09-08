#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr = NULL;
	unsigned long int index = 0;
	int printed = 0;

	if (ht != NULL)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			curr = ht->array[index];
			while (curr != NULL)
			{
				printf("\'%s\': \'%s\', ", curr->key, curr->value);
				curr = curr->next;
				printed = 1;
			}
		}
		if (printed == 1)
			printf("\b\b}\n");
		else
			printf("}\n");
	}
	else
	{
		printf("{}\n");
	}
}
