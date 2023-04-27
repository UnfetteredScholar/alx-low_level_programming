#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next = head;

	while (next != NULL)
	{
		head = next;
		next = head->next;
		free(head->str);
		free(head);
	}
}
