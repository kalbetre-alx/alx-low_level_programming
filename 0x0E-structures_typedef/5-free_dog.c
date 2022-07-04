#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a new dog sructure
 * @d: the dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
