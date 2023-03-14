#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argc) (void)(argc)

/* main: beginning of the program's compilation
 * argc: argument count
 * argv: value at each count of argument
 * Return: 0
 */
  
   int main(int __attribute__((unused)) argc, char *argv[]) {

	   UNUSED(argc);

	   printf("%s\n", argv[0]);
	   
	   return 0;
}
