#include <stdio.h>

/**
 * print_diagsums - prints diagonal sums of a matrix
 * @a: the matrix
 * @size: size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	unsigned int diag_1 = 0, diag_2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag_1 += a[i * size + j];
			if (j == size - i - 1)
				diag_2 += a[i * size + j];
		}
	}

	printf("%d, %d\n", diag_1, diag_2);
}
