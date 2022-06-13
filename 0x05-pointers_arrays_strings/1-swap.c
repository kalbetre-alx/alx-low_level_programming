#include "main.h"

/**
 * swap_int - swap value of two integers
 * @a: pointer to the first int
 * @b: pointer to the second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
