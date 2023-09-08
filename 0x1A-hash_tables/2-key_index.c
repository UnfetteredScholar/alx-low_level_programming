#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - returns the index for a key
 * @key: the key
 * @size: the size of the hash array
 *
 * Return: the index in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
