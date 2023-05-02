#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at a specified index from a linked list
 * @head: pointer to the head node
 * @index: the index of the node
 *
 * Return: the node at the index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
