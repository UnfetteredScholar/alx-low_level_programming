#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to the head of the linked list
 * @str: the sting to be added
 *
 * Return: pointer to new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *node = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new;
	}
	return (new);
}
