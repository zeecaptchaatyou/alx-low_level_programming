#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all -  variadic function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: Nada
 */
void print_all(const char *const format, ...)
{
size_t i = 0;
va_list ments;
char a, *d;
int b;
float c;
va_start(ments, format);
while (format[i] && format)
{
switch (format[i])
{
case 'c':
a = va_arg(ments, int);
printf("%c", a);
break;
case 'i':
b = va_arg(ments, int);
printf("%d", b);
break;
case 'f':
c = va_arg(ments, double);
printf("%f", c);
break;
case 's':
d = (char *)malloc(sizeof(va_arg(ments, char *)));
d = va_arg(ments, char *);
if (d == NULL)
{
free(d);
printf("(nil)");
break;
}
printf("%s", d);
}
if ((format[i] == 's' || format[i] == 'f' ||
format[i] == 'c' || format[i] == 'i') && format[i + 1] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(ments);
}
