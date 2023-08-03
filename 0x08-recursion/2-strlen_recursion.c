#include "main.h"

/**
 * _strlen_recursion - returns the length of it's argument
 * @s: pointer to the string to be toyed with
 * Return: length of the string ofc
*/
int _strlen_recursion(char *s)
{
int count = 0;
if (*s != '\0')
{
count += 1;
count += _strlen_recursion(s + 1);
}
return (count);
}
