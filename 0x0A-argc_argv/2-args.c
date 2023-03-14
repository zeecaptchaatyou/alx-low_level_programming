#include <stdio.h>

/**
* main - prints all arguments passed to it
*@argc: argument count
*@argv: array of values of argument count
*Return: 0
*/

int main(int argc, char *argv[])
{
		int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);

		return (0);
}
