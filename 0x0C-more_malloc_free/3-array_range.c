#include <stdlib.h>

/**
 * array_range - creates an array of numbers
 * @min: the minimum number
 * @max: the maximum number
 *
 * Return: pointer to the array or NULL
 */
int *array_range(int min, int max)
{
	int *ar;
	unsigned int i = 0, count = max - min + 1;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(int) * count);
	if (ar == NULL)
		return (NULL);

	while (i < count)
	{
		*(ar + i) = min + i;
		i++;
	}
	return (ar);
}
