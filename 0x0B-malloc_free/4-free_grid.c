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
}


/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}
