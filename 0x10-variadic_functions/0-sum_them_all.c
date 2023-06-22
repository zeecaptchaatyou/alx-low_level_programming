#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ments;
size_t i = 0, sum = 0;
if (n != 0)
{
va_start(ments, n);
for ( ; i < n; i++)
sum += va_arg(ments, int);
va_end(ments);
return (sum);
}
return (0);
}
