#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: indicates number of times the line is to be drawn
 * Return: one.
 */
void print_diagonal(int n)
{
    int i;
    int space = 0;
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (space = 0; space < i; space++)
            {
                _putchar(32);
            }
            _putchar(92);
            _putchar('\n');
        }
    }
}