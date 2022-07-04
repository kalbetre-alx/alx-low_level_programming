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
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
