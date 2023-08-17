#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elelments of a dlist
 * @h: pointer to the head node of the dlist
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *curr = NULL;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		curr = h->next;
		while (curr != NULL)
		{
			printf("%d\n", curr->n);
			curr = curr->next;
			nodes++;
		}
	}
	return (nodes);
}
