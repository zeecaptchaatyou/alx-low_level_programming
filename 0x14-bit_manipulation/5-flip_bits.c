#include "main.h"

/**
 * flip_bits - returns the number of bits needed to get from
 * one number to another
 * @n: number to be flipped from
 * @m: number to be flipped to
 * Return: read the description
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a = n ^ m, bits = 0;

for ( ; a; a >>= 1)
{
if (a & 1)
bits += 1;
}
return (bits); }

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
