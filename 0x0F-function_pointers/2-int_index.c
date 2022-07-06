#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array of elements
 * @size: the size of the array
 * @cmp: a pointer to the function
 *
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
