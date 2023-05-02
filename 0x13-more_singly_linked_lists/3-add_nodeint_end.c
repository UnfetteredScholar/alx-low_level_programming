#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: the head of the list
 * @n: the element to add
 *
 * Return: the address of the new node or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *h = NULL;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	return (new);
}
