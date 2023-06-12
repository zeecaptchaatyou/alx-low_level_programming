#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument counter
 * @argv: pointer to argument vectors
 * Return: 0 upon success.
*/
int main(int argc __attribute__((unused)), char **argv)
{
int i = 0;
for ( ; argv[0][i] != '\0'; i++)
{
putchar(argv[0][i]);
}
putchar('\n');
return (0);
}
