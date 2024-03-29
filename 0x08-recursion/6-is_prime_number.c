#include "main.h"

/**
* is_prime - returns the 1 if n is prime
* @n: number to be checked
* @start: number to start checking from
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime(int n, int start)
{
if (start <= 1)
return (1);
else if (n % start == 0)
return (0);
return (is_prime(n, start - 1));
}

/**
* is_prime_number - checks if return value of is_prime is unsigned or not
* @n: the number to toy with....
* Return: return val returned ny is_prime if n is unsigned...else 0
*/
int is_prime_number(int n)
{
int start = n / 2;
if (n <= 1)
return (0);
return (is_prime(n, start));
}
