#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at the specified index
 * @head: pointer to address of the current head
 * @index: the index to be removed
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i = 0;

	if (curr == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
			curr->next->prev = NULL;
		free(curr);
	}
	else
	{
		while (curr != NULL && i < index)
		{
			curr = curr->next;
			i++;
		}
		if (curr == NULL || i != index)
			return (-1);
		curr->prev->next = curr->next;
		if (curr->next != NULL)
			curr->next->prev = curr->prev;
		free(curr);
	}
	return (1);
}
