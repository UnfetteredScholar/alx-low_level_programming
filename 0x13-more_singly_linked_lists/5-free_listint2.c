#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head pointer to NULL
 * @head: pointer to the head node pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *n = *head;
	listint_t *curr = NULL;

	if (*head != NULL)
	{
		while (n != NULL)
		{
			curr = n;
			n = curr->next;
			free(curr);
		}
		*head = NULL;
	}
}
