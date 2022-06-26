#include <stdio.h>

/**
 * create_array - creates an array of chars with initial value
 * @size: size of the array
 * @c: initial value for the array elements
 *
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);

	ar = (char *)malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);

	while (size)
	{
		ar[size - 1] = c;
		size--;
	}
	return (ar);
}
