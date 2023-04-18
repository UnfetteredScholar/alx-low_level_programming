#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - length of a string
 * @s: the string
 *
 * Return: the string length
 */
int _str_len(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (s[len] != '\0')
			len++;
	}
	return (len);
}

/**
 * _str_cpy - coppies string from source to destination
 * @s1: the source
 * @s2: the destination
 *
 * Return: pointer to new string
 */
char *_str_cpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/**
 * new_dog - creates a new dog object
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	int len;

	if (d == NULL)
		return (NULL);

	len = _str_len(name);
	d->name = malloc(sizeof(char) * (len + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = _str_cpy(name, d->name);

	d->age = age;

	len = _str_len(owner);
	d->owner = malloc(sizeof(char) * (len + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->owner = _str_cpy(owner, d->owner);
	return (d);
}
