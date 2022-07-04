#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a dog sructure
 * @d: pointer to a dog structure
 * @name: a cstring name of the dog
 * @age: age of the dog
 * @owner: a cstring name of the owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
