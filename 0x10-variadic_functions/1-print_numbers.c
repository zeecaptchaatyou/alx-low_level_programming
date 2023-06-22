#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between two numbers
 * @n: number of integers passed to the function
 * Return: Nada.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
size_t i = 0;
va_list(ments);
va_start(ments, n);

for ( ; i < n; i++)
{
printf("%d", va_arg(ments, int));
if (separator != NULL && i != (n - 1))
printf("%s ", separator);
}
va_end(ments);
printf("\n");
}
