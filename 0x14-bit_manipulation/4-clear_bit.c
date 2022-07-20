#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index
 * @n: the number
 * @index: the zero based index
 *
 * Return: 1 if it succeeded or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
