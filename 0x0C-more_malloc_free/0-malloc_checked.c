#include <stdlib.h>

/**
 * malloc_checked - allocates a memory for a given size
 * @b: size of memory
 *
 * Return: pointer to the allocated memeory
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	
	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
