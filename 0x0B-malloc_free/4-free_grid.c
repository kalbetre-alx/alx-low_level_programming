#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional array of integers
 * @grid: the 2d array of ints
 * @height: the number of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
