#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array of elements
 * @size: the size of the array
 * @action: a pointer to the function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action && size)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
