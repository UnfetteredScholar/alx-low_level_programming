#include "lists.h"

/**
 * list_len - gets the length of a linked list
 * @h: the head of the list
 *
 * Return: the length of the list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		len++;
	}
	return (len);
}
