#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets the value of a bit at a given index
 * @n: value of decimal num to be conversted into binary
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index given or negatve 1 if there's an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int hold;

if (index > 64)
return (-1);

hold = n >> index;
return (hold & 1);
}
