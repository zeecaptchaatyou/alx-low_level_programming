#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array -- creates an array of chars and fills it with a specific char.
 * @size: size of the array to be created.
 * @c: character to fill the newly creates array with.
 * Return: NULL if: size is 0 or function fails, otherwise, return
 * pointer to the newly created array.
*/
char *create_array(unsigned int size, char c)
{
int i = 0, size_in_bytes = size * sizeof(int);
char *arr = (char *)malloc(size_in_bytes);
for ( ; i < size_in_bytes; i++)
*(arr + i) = c;
if (size == 0)
return ('\0');
else
return (arr);
}
