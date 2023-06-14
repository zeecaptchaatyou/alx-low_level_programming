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
int **arr = (int **)malloc(height * sizeof(int *));
if (height <= 0 || width <= 0)
{
free(arr);
return (NULL);
}

if (arr != NULL)
{
for ( ; i < height; i++)
{
arr[i] = (int *)malloc((width * sizeof(int)));
if (arr[i] == NULL)
free(arr);
else
{
for ( ; j < width; j++)
arr[i][j] = 0;
}
}
return (arr);
}
else
{
free(arr);
return (NULL);
}
}
