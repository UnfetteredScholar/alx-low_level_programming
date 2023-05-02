#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - gets the length of a list
 * @h: the head of the list
 *
 * Return: the length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
