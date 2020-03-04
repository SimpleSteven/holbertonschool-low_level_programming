#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid
  * @grid: the array
  * @height: the int
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; grid[i]; i++)
		free(grid[i]);
	free(grid);
}
