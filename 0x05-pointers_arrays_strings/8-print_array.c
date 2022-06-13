#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the int array
 * @n: number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int offset;

	for (offset = 0; offset < n; offset++)
	{
		printf("%d", *(a + offset));
		if (offset != n - 1)
			printf(", ");
	}
	putchar('\n');
}
