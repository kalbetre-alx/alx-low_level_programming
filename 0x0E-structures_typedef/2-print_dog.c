#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a dog sructure
 * @d: pointer to a dog structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
