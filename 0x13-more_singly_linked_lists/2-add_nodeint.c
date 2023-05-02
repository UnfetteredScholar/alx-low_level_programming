#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: the head of the list
 * @n: the element to add
 *
 * Return: the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;

	return (new);
}
