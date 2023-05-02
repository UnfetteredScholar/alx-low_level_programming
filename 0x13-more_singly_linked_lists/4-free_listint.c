#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list from memory
 * @head: the head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *n = head;

	while (n != NULL)
	{
		head = n;
		n = head->next;
		free(head);
	}
}
