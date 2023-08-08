#include "main.h"

/**
 * free_grid - function that frees a memory previously allocated
 *@grid: pointer to the array
 *@height: number of rows
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
