#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argc) (void)(argc) 
/* argc = argument count
 * argv = value at each count of argument
 * Let's do this!
 */
   int main(int argc, char *argv[]) {
	UNUSED(argc);

	printf("%s\n", argv[0]);

	return 0;
}

