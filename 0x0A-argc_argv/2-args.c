#include <stdio.h>

/**
 *  main - prints all arguments passed into it
 *@argc: argument count
 *@argv: array of arguments
 *Return: 0
 */

 int main(int argc, char *argv[])
{
	int i = 0;

	/*for (i=0; i<argc; i++)*/
	while ( i < argc )
	{	
		printf("%s\n", argv[i]);
	        i++;
	}
	return (0);
}
