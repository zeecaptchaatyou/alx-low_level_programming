#include <stdio.h>
#include <stdbool.h>

/**
 *  -
 */

int main(void)
{
    int prime[4];
    int i, size = 10, number, back, counter = 0;
    for (i = 0; i < size; i++)
    {
        bool check;
        for (back = 2; back < i; back++)
        {
            if (i % back == 0)
            {
                check = true;
                break;
            }
            //     else
            //     {
            //         prime[counter] = i;
            //     }
            // }
        }
        if (check == false)
        {
            prime[counter] = i;
            printf("%d", prime[counter]);
        }
        counter++;
        //putchar('\n');
    }
    // printf("%ls", prime);
    // printf("Zee");
}