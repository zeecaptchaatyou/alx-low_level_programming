#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline
 * @separator: string to be printed in between strings
 * @n: number of strings passed into the function
 * Return: Nada.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
size_t i = 0;
va_list ments;
char *new_str;
va_start(ments, n);
new_str = (char *)malloc(sizeof(va_arg(ments, char *)));
if (new_str != NULL)
{
for ( ; i < n; i++)
{
new_str = va_arg(ments, char *);
if (new_str == NULL)
printf("(nil)");
else
printf("%s", new_str);
if (separator != NULL && i != (n - 1))
printf("%s", separator);
}
}
else
free(new_str);
va_end(ments);
putchar('\n');
}
