#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: argument counter
 * @argv: argument vector.....yadayadayada
 * Return: argv(s)
*/
int main(int argc, char **argv)
{
int i = 0, j = 0;
for ( ; i < argc; i++)
{
for ( ; argv[i][j] != '\0'; j++)
putchar(argv[i][j]);
j = 0;
putchar('\n');
}
return (0);
}
