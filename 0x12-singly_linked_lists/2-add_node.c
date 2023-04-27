#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a node to the beginning of a list
 * @head: the old head
 * @str: the new string
 *
 * Return: the new head or else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new = NULL;

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
