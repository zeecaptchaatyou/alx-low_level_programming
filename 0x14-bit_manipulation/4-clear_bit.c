#include "main.h"

/**
 * clear bit - clears sets bit at given index to 0
 * @n: pointer to number to be used
 * @index: the snitch in this quidditch
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63 || n == NULL)
return (-1);

return (*n &= ~(1 << index));
}
