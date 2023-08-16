#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - function that determines which function its argument
 * operation should make use of.
 * @s: string to be passed into get_op_func.
 * Return: pointer to a function of return type int.
*/
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
