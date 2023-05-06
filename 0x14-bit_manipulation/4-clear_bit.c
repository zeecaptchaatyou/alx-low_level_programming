#include "main.h"

/**
 * clear_bit - ssets the value of a bit to 1 at any given index
 * @n: pointer to decimal number to converted to binary
 * @index: index position of bit to be flipped
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
unsigned int hold;

if (index > 64)
return (-1);
hold = index;
for (i = 1; hold > 0; i *= 2, hold--)
;

if ((*n >> index) & 1)
{
*n -= i;
}
return (1);
}
