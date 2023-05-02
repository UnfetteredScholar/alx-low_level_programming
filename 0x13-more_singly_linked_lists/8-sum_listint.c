#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all data in a linked list
 * @head: the head of the list
 *
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
