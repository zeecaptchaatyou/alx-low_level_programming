#include "main.h"

/**
 * print_line -  A function that draws a staright line in the terminal
 *
 * @n: indicates number of times the line should be printed
 *
 * Return: None.
 */
void print_line(int n)
{
    int i;
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            _putchar(95);
        }
        _putchar('\n');
    }
}