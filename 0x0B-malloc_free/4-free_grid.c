#include "main.h"
#include <stdlib.h>
/**
 * print_number- Entry point
 *
 *@grid: check
 *@height
 *
 * Return: Always 0 (Success)
 */
oid free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
