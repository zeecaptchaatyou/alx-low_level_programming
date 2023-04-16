#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - Entry function
 * Return: Always 0.
 */
void jack_bauer(void)
{
    int i=0, j=0 ,a=0, b=0;
    while (i<3)
    {
        while(j<5)
        {
            while(a<6)
            {
                while(b<10)
                {
                    printf("%d%d : %d%d\n", i, j, a, b);
                    b++;
                }
                a++;
            }
            j++;
        }
        i++;
    }
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}