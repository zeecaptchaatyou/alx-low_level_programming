#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched for the desired integer
 * @size: number of elements within array
 * @cmp: function pointer of return type int
 * Return: sth, see for yourself
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0, ret = -1;
if (size <= 0)
return (-1);
if (array == NULL || cmp == NULL)
return;
for ( ; i < size; i++)
{
if (cmp(array[i]) !=  0)
{
ret = i;
break;
}
}
if (ret < 0)
return (-1);
else
return (ret);
}
