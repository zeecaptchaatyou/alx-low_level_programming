#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lower case
 * Return: 0 if the program is successful
*/

void print_alphabet()
{
    int i;
    for (i=97; i<123; i++)
    {
        putchar(i);
    }
    putchar('\n');
}