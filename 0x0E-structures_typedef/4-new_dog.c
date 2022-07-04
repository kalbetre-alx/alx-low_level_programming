#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(d));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(name));
	d->owner = malloc(sizeof(owner));

	if (d->name == NULL || d->owner == NULL)
		return (NULL);

	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	return (d);
}
