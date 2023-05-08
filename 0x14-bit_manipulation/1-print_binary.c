#include "main.h"

/**
 * multiples - prints the highest possible multiple of 2 that is less than n
 * @new_n: value to check for the highest multiple of 2 below
 * Return: (multiple divided by 2
*/
int multiples(int new_n)
{
int multiple = 1;
while (multiple <= new_n)
{
multiple <<= 1;
}
return (multiple >> 1);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 * Return: 0
*/
void print_binary(unsigned long int n)
{
unsigned long int i = multiples(n);
if (n == 0)
{
_putchar(48);
}
for ( ; i >= 1; i >>= 1)
{
if (n >= i)
{
_putchar(49);
n -= i;
}
else if (n < i)
{
_putchar(48);
}
}
}
