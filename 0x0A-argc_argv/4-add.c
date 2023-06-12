#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: result, upon success ||  0 if no number is passed
 * || 1 if one of the numbers contain symbols that are not digits
*/
int main(int argc, char **argv)
{
int i = 1, sum = 0, z = 0;
for ( ; i < argc; i++)
{
z = atoi(argv[i]);
if (z > 0)
sum += z;
else
{
sum = 0;
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
