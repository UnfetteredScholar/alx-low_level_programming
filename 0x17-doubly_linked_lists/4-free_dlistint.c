#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlist
 * @head: the head of the dlist
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = NULL;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
