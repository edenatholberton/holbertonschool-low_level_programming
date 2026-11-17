#include "main.h"

/**
 * alloc_grid - makes a grid of ints, all set to 0
 * @width: how many numbers in each row
 * @height: how many rows
 *
 * Return: pointer to the grid, or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	row = 0;
	while (row < height)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			while (row > 0)
			{
				row--;
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
	return (grid);
}

