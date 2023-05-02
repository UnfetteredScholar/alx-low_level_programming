#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index
 * @head: pointer to pointer to head node
 * @index: the index to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *tmp = NULL;
	unsigned int i = 0;

	if (index == 0)
	{
		if (curr == NULL)
			return (-1);
		*head = (*head)->next;
		free(curr);
	}
	else
	{
		while (i < index - 1 && curr != NULL)
		{
			curr = curr->next;
			i++;
		}
		if (i != index - 1)
			return (-1);
		tmp = curr->next;
		if (tmp == NULL)
			return (-1);
		curr->next = tmp->next;
		free(tmp);
	}
	return (1);
}
