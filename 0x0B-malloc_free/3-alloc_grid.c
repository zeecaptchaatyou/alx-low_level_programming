#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2D arrday of integers
 * @width: length of each subarray
 * @height: number of subarrays
 * Return: pointer to 2D array
*/
int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **arr;
if (height <= 0 || width <= 0)
return (NULL);

arr = (int **)malloc(height * sizeof(int *));
if (arr == NULL)
{
free(arr);
return (NULL);
}
for ( ; i < height; i++)
{
arr[i] = (int *)malloc((width * sizeof(int)) + 1);
for ( ; j < width; j++)
arr[i][j] = 0;
}
return (arr);
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
    return (0);
}
