#include <stdio.h>
#define UNUSED(argc) (void)(argc)

/**
 *main: takes control of the program first
 *@argc: argument count
 *@argv: value at each count of argument
 *Return: 0
 */
  
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	   UNUSED(argc);

	   printf("%s\n", argv[0]);
	   
	   return (0);
}
