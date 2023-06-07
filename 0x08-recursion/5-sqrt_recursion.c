#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to toy with
 * Return: literally what I said above: unsigned square root of n
*/
int _sqrt_recursion(int n)
{
float i = 1, j = n, k = 0;
if (n > 1)
{
for ( ; i < j; i++)
{
k = n / i;
if (k == i)
break;
}
if (k != i)
return (-1);
else
return (k);
}
else if (n < 1)
return (n);
else
return (1);
}
