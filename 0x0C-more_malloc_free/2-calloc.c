#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *arr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
arr = malloc(nmemb * size);
if (arr != NULL)
{
for (i = 0; i < (nmemb * size); i++)
arr[i] = 0;
return (arr);
}
else
return (NULL);
}
