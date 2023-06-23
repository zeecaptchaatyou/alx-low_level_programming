#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of all arguments if n isn't 0, 0 otherwise
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ments;
size_t i = 0;
int sum = 0;
va_start(ments, n);
if (n != 0)
{
for ( ; i < n; i++)
sum += va_arg(ments, int);
va_end(ments);
return (sum);
}
else
return (0);
}
