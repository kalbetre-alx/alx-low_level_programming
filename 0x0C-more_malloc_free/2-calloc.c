#include <stdlib.h>

/**
 * _calloc - allocates a memory for an array
 * @nmemb: number of elements of the array
 * @size: the size of each elements
 *
 * Return: pointer to the array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		*((int *)ar + i) = 0;
		i++;
	}
	return (ar);
}
