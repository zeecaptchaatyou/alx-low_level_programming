#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed to it as argument
 * @argc: argument counter
 * @argv: argument vector
 * Return: 1 if argc <= 2 else 0
*/
int main(int argc, char **argv)
{
int num, mul = 1, i = 1;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
for ( ; i < argc; i++)
{
num = atoi(argv[i]);
mul *= num;
}
printf("%d\n", mul);
return (0);
}
