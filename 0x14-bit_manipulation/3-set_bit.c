#include "main.h"

/**
 * set_bit - sets the value of a bit at given index to 1
 * @n: number to be toy...I don talk this thing tire
 * @index: like the snitch in Quidditch
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63 || n == NULL)
return (-1);

return (*n |= (1 << index));
}
