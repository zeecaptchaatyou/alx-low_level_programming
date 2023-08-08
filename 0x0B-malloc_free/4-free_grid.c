#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height);

/**
 * free_grid -  frees memory allocates by a function alloc_grid
 * @grid: pointer to a 2d array of integers, grid in context
 * @height: really dunno why this is here but, I'll keep coding
 * Return: Nada
*/
void free_grid(int **grid, int height)
{
int i = 0;
for ( ; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
