#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the specified index
 * @head: the head of the linked list
 * @idx: the index to insert at
 * @n: the data to insert
 *
 * Return: the address of the new node or else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr = *head;
	unsigned int i = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (i < idx - 1 && curr != NULL)
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
		curr->next = new;
	}
	return (new);
}
