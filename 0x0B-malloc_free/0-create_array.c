#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array -- creates an array of chars and fills it with a specific char.
 * @size: size of the array to be created.
 * @c: character to fill the newly creates array with.
 * Return: NULL if: size is 0 or function fails, otherwise, return
 * pointer to the newly created array.
*/
char *create_array(unsigned int size, char c)
{
int i = 0, size_in_bytes = size * sizeof(int);
char *arr = (char *)malloc(size * sizeof(int));
for ( ; i < size_in_bytes; i++)
*(arr + i) = c;
if (size == 0 || arr == NULL)
return ('\0');
else
return (arr);
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
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(73, 'A');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
