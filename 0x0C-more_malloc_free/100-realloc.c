#include <stdlib.h>

/**
 * _realloc - reallocates a memory
 * @ptr: pointer to the memory
 * @old_size: the current size of the memeory
 * @new_size: the new size of the memeory
 *
 * Return: pointer to the memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int i = 0, limit;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);

	limit = old_size < new_size ? old_size : new_size;
	while (i < limit)
	{
		*((char *)newptr + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (newptr);
}
