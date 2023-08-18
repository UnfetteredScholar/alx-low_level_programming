#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at the given index
 * @h: pointer to the address of the current head
 * @idx: the index
 * @n: the data to be added
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *curr;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	curr = *h;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
	}
	else
	{
		while (curr != NULL && i < idx - 1)
		{
			curr = curr->next;
			i++;
		}
		if (i != idx - 1)
		{
			free(new);
			return (NULL);
		}
		new->next = curr->next;
		new->prev = curr;
		if (curr->next != NULL)
			curr->next->prev = new;
	}
	return (new);
}
