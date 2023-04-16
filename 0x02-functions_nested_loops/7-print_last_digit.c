#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Ectry Function
 * @n: integer to get digit
 * Return: last digit
 */
int print_last_digit(int n)
{
   int a = 0;
    if (n >= 0)
    {
        a = (n % 10);
    }
    else if (n < 0)
    {
        a = (- 1 * (n % 10));
    }
    else a = 0;
    
    _putchar(a + 48);
    return (a);

}