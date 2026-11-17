#include "main.h"

/**
 * free_grid - frees a grid made by alloc_grid
 * @grid: the grid to free
 * @height: how many rows the grid has
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
/* returns nothing, takes the top list and how many rows it has */
{
/* start of the function */
	int row;
	/* the finger that points at one row at a time */

	if (grid == NULL)
		/* if there is no grid, there is nothing to give back */
		return;
		/* leave early */

	row = 0;
	/* start the finger at the first row */
	while (row < height)
	/* keep going until every row is done */
	{
	/* start of the loop */
		free(grid[row]);
		/* give back one row of numbers */
		row++;
		/* move the finger to the next row */
	}
	/* end of the loop */
	free(grid);
	/* give back the top list last, after all the rows are gone */
}
/* end of the function */

