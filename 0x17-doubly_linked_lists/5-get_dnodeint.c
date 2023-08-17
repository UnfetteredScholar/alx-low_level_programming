#include <stdlib.h>
#include "lists.h"

/**
 * get_dlistint_t - returns the nth node of a dlist
 * @head: the head of the list
 * @index: the index of the node
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}