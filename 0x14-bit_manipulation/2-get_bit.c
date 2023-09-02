#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be toyed w
 * @index: the snitch
 * Return: the bit or get bit(ten), ah!
*/
int get_bit(unsigned long int n, unsigned int index)
{
int a;
/*check if index is just enough for the max 64-bit number*/
if (index > 63)
return (0);

/*shift 1 to position index and do a bitwise and with n*/
a = ((n & (1 << index)));

/*
 * a returns some non-zero or zero number and bam!
 * I put it back in it's place
 */
return (a >> index);
}
