#include <stdio.h>
#include "main.h"

/**
 * main - prints numbers from 1 to 100 but replaces the multiples of 3 and 5 with fizz, buzz or fizzbuzz, according to the instructions
 * Return: 0, if sucess
 */
int main(void)
{
    int i;
    for (i = 1; i < 101; i++)
    {
        if ((i % 3 == 0) && (i % 5 != 0))
        {
            printf("Fizz ");
        }
        else if ((i % 5 == 0) && (i % 3 != 0))
        {
            printf("Buzz ");
        }
        else if ((i % 3 == 0) && (i % 5 == 0))
        {
            printf("FizzBuzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    putchar('\n');
    return (0);
}