#include "main.h"
#include <math.h>
#include <stdio.h>
/**
 * main - main block
 * Description: program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
    int i;
   long sum;
   long pre_num = 0;
   long post_num = 0;
    for (i = 0; i< 98; i++)
    {
        post_num = pow((1-1.618034), (i-1));
        pre_num =  pow((1.618034), (i-1));
        sum = (long)(pre_num - post_num ) / sqrt(5);
        printf("%ld, ", (long)round(sum));
    }
    return (0);
}