#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: array to be toyed with
 * @size: size of array
 * @action: function pointer with return type void
 * Return: Nada.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array == NULL)
{
free(array);
return;
}
if (size <= 0)
return;
if (array != NULL)
{
for ( ; i < size; i++)
action(array[i]);
}
}
