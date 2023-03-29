#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integer arguments passed into it
 * argc: argument count
 * argv: array of values at argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int answer, i;

	if (2=<i) 
	{
		for(i=1; i<argc; i++)
		{
			answer *= atoi(argv[i]);
			printf("%d\n", answer);
		}
	}
	else 
	{
		printf("Error\n");
		return 1;
	}

	return (0);
}
