#include <stdlib.h>

/**
 * alloc_gird - allocates a 2 dimensional array of integers
 * @width: the number of columns
 * @height: the number of rows
 *
 * Return: pointer to the two dimentional array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **ary_2D;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	ary_2D = malloc(sizeof(int *) * height);
	if (ary_2D == NULL)
		return (NULL);

	while (height--)
	{
		ary_2D[height] = (int *)malloc(sizeof(int) * width);
		if (ary_2D[height] == NULL)
			return (NULL);

		i = 0;
		while (i < width)
		{
			ary_2D[height][i] = 0;
			i++;
		}
	}

	return (ary_2D);
}
