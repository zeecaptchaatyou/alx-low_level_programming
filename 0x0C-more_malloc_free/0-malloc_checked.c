#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes to be allocated in memory
 * Return: pointer to the newly allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
else
return (ptr);
}
