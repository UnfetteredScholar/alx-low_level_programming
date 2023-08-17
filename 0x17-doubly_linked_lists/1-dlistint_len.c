#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - finds the length of a dlist
 * @h: pointer to the head of the linked list
 *
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
