#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Entry code
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    int i, j;

    for(j = 0; j< 10; j++)
    {
        for(i = 97; i < 123; i++)
        {
            putchar(i);
        }
        putchar('\n');
    }
}