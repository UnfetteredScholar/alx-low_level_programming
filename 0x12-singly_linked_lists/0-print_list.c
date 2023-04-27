#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements of a linked list
 * @h: the head node
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		len++;
		h = h->next;

	}
	return (len);
}
