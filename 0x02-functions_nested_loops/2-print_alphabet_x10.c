#include "main.h"

/**
 * print_alphabet_x10 - Entry code
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
    int j, k;

    for(j = 0; j < 10; j++)
    {
        for(k = 97; k < 123; k++)
        {

            putchar(k);

        }

        putchar('\n');
    }

    return;

}