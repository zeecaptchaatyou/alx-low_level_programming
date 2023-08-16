#include "3-calc.h"

/**
 * op_add - adds operand a to b
 * @a: first operand
 * @b: second operand
 * Return: result of the operation
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts operand b from a
 * @a: first operand
 * @b: second operand
 * Return: result of the operation
*/
int op_sub(int a, int b)
{
return ((a) - (b));
}

/**
 * op_mul - mutiplys a and b
 * @a: first operand
 * @b: second operand
 * Return: result of the operation
*/
int op_mul(int a, int b)
{
return ((a) * (b));
}

/**
 * op_div - divides operand a by b
 * @a: first operand
 * @b: second operand
 * Return: result of the operation
*/
int op_div(int a, int b)
{
return ((a) / (b));
}

/**
 * op_mod - calculates the remainder of b from a
 * @a: first operand
 * @b: second operand
 * Return: result of the operation
*/
int op_mod(int a, int b)
{
return ((a) % (b));
}
