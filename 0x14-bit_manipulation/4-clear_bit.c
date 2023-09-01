#include "main.h"

/**
 * clear_bit - clears sets bit at given index to 0
 * @n: pointer to number to be used
 * @index: the snitch in this quidditch
 * Return: 1 upon success else 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63 || n == NULL)
return (-1);

*n &= ~(1 << index);
return (1);
}
