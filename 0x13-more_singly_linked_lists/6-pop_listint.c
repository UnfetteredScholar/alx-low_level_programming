#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head of a linked list
 * @head: pointer to pointer of original head node
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *curr = NULL;
	int n = 0;

	if (*head != NULL)
	{
		curr = *head;
		*head = curr->next;
		n = curr->n;
		free(curr);
	}
	return (n);
}
