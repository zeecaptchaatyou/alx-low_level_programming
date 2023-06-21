#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function that performs simple operations
 * @argc: argument count
 * @argv: array of arguments passed to main
 * Return: 0
*/
int main(int argc, char **argv)
{
int op1, op2, ret;
char *op = argv[2];
int (*op_ptr)(int,int);
/*char s[6] = "+-*/
/*Conditions*/
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if (!(strcmp(op, "+") == 0 || strcmp(op, "-") == 0 || strcmp(op, "*") == 0 || strcmp(op, "/") == 0 || strcmp(op, "%") == 0))
{
printf("Error\n");
exit(99);
}
if ((strcmp(op, "/")  == 0 || strcmp(op, "%") == 0) && (atoi(argv[3])) == 0)
{
printf("Error\n");
exit(100);
}
op1 = atoi(argv[1]), op2 = atoi(argv[3]);
op_ptr = get_op_func(op);
ret = op_ptr(op1, op2);
printf("%d\n", ret);
return (0);
}
