#include "main.h"

int sqrt_calc(int n, int z);

/**
* _sqrt_recursion - uses the checks for tthe signedness of the return value
* of the _sqrt function
* @n: number to be toyed with
* Return: the square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_calc(0, n));
}

/**
 * sqrt_calc - returns the square root of a number
 * @n: test number
 * @z: squared number
 * Return: natural or unnatural square root of n
 */
int sqrt_calc(int n, int z)
{
	if (n > z / 2)
		return (-1);
	else if (n * n == z)
		return (n);
	return (sqrt_calc(n + 1, z));
}
