#include "main.h"
#include<stdio.h>
/**
 * times_table - Entry function
 * Return: value
 */
void times_table(void)
{
    int i = 0, j=0;
    int pland;
    while(i<9)
    {
        printf("0, \n");
        while(j<9)
        {
            pland = i*j;
            printf("%d,  \n", pland);
            j++;
        }
        i++;
    }
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}