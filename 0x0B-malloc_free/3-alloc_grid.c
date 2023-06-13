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
int *mini_arr = (int *)malloc(width * sizeof(int));
int **arr = (int **)malloc(height * sizeof(mini_arr));
if (height <= 0 || width <= 0)
return (NULL);
for ( ; *(arr+i) != '\0'; i++)
{
for ( ; *(*(arr + i) + j) != '\0';)
}
}