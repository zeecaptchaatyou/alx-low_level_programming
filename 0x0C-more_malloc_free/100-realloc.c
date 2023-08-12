#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
* Return: pointer to the address of the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_block;
int i;

if (ptr == NULL)
{
new_block = malloc(new_size);
return (new_block);
}
else if (new_size == old_size)
return (ptr);

else if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
else
{
new_block = malloc(new_size);
if (new_block != NULL)
{
for (i = 0; i < min(old_size, new_size); i++)
*((char *)new_block + i) = *((char *) ptr + i);
free(ptr);
return (new_block);
}
else
return (NULL);
}
printf("new = %p && old = %p\n", new_block, ptr);

}


/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
