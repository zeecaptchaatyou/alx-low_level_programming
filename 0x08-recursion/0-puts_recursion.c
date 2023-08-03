#include "main.h"

/**
 * _puts_recursion - prints a string, folllowed by a new line
 * @s: pointer to the string to be put (lmaooo, 'printed')
 * Return: Nada
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
putchar('\n');
return;
}
}
