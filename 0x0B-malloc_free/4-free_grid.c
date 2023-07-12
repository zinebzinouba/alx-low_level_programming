#include "main.h"
#include <stdlib.h>
/**
 * free_grid- Entry point
 *
 *@grid: check
 *@height: check
 *
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
