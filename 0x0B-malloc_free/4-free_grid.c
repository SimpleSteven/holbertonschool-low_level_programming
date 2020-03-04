#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - the function
  * @grid: the array
  * @height: the int
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
