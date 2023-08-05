#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @argc: counter of arguments passed to main
 * @argv: pointer to strings of arguments passed to main
 * Return: argc
*/
int main(int argc, char **argv __attribute__((unused)))
{
char i = argc;
_putchar((i + 48) - 1);
_putchar('\n');
return (0);
}
