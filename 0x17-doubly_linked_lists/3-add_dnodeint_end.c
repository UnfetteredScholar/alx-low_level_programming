#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a dlist
 * @head: pointer to address of current head node
 * @n: the element to add
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *curr = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	curr = *head;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		new->prev = curr;
		curr->next = new;
	}
	return (new);
}
