#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -  frees a 2 dim grid
 * @grid: 2 dim grid
 * @height: height dim of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
