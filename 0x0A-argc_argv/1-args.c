#include <stdio.h>

/**
* main - prints number of arguments passed into it
*@argc: argument count
*@argv: array of argument values
*Return: value of argc
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
