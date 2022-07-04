#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicate the given string
 * @str: given string
 *
 * Return: duplicate string or NULL
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (; len >= 0; len--)
		dup[len] = str[len];

	return (dup);
}

/**
 * new_dog - creates a new dog sructure
 * @name: a cstring name of the dog
 * @age: age of the dog
 * @owner: a cstring name of the owner
 *
 * Return: a new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(d));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
