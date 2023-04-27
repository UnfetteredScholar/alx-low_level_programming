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
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str != NULL)
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		len++;
		node = node->next;

	}
	return (len);
}
