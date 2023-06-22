#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 * @separator - string to be printed between two numbers
 * @: number of integers passed to the function
 * Return: Nada.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
size_t i = 0;
va_list(ments);
va_start(ments, n);
if (n > 0)
{
for ( ; i < n; i++)
{
if (separator[i + 1] != '\0')
printf("%d%c ", va_arg(ments, int), separator[i]);
else
{
if (n - i != 1)
printf("%d, ", va_arg(ments, int));
else
printf("%d  ", va_arg(ments, int));
}
}
}
putchar('\n');
va_end(ments);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
