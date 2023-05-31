#include "main.h"

/**
 * void print_triangle - prints a triangle, follwed by a new line
 * @size: indicates thesize of the triangle
 * Return: None
 */
void print_triangle(int size)
{
    int i, j, space;
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < size + 1; i++)
        {
            for (space = size + 1,j = 0; space > 0; j++,space--)
            {
                _putchar(32);
            }
            for (j = 0; j < i; j++)
             {
                 _putchar(35);
             }
            _putchar('\n');
        }
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}