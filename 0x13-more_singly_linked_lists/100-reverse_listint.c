#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the head of the list
 *
 * Return: the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = *head;

	while (n != NULL)
	{
		*head = n;
		n = n->next;
		(*head)->next = p;
		p = *head;
	}
	*head = p;
	return (p);
}
