#include "lists.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _puts(char *s)
{
	int i = 0;

	while(s[i] != '\0')
		_putchar(s[i++]);
	return (i);
}

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
			_putchar('[');
			_putchar('0' + node->len);
			_putchar(']');
			_putchar(' ');
			_puts(node->str);
			_putchar('\n');
		}
		else
		{
			_puts("[0] (nil)\n");
		}
		len++;
		node = node->next;

	}
	return (len);
}
