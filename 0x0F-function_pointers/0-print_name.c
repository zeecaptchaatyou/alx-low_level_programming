#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @f: pointer to function of return type void.
 * Return: Nada.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
