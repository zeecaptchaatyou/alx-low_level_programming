#include "main.h"
#include <stdio.h>

/**
 * _abs - Entry Function
 * Descritpion: absolute value function
 * @c: int for number
 * Return: 0 or 1
 */

int _abs(int c)
{
    int b = 0;
    int d = c;
    if(c < 0 )
    {
        b = (- 1) * d;
    }
    else if (b >= 0)
    {
        b = d;
    }
    return (b);
}