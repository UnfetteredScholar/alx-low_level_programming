#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog struct object
 * @d: the dog object
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL ? d->name : nil));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL ? d->owner : nil));
	}
}
