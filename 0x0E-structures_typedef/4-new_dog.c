#include "dog.h"
#include <stdlib.h>

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
	unsigned int name_len = 0, owner_len = 0;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(d));
	if (d == NULL)
		return (NULL);

	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		;

	d->name = malloc(sizeof(char) * (name_len + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (name_len = 0; name[name_len] != '\0'; name_len++)
		d->name[name_len] = name[name_len];

	d->owner = malloc(sizeof(char) * (owner_len + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		d->owner[owner_len] = owner[owner_len];

	d->name[name_len + 1] = '\0';
	d->owner[owner_len + 1] = '\0';
	d->age = age;
	return (d);
}
