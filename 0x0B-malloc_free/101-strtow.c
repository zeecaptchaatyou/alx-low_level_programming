#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to newly allocated space for array of words upon success
 * else NULL
*/
char **strtow(char *str)
{
int i = 0, w = 0, j = 0, c = 0, k = 0, in = 0;
char **new_str;
if (str == NULL)
return (NULL);
/*w checks for number of words while i checks for num of valid bytes within str*/
while (str[i] != '\0')
{
if (str[i] != 32)
i++;
if (str[i] != 32 && str[i - 1] == 32)
w++;
}

new_str = (char **)malloc(i * sizeof(char) + w);

if (new_str == NULL)
return (NULL);
else
{
for (i = 0; i < w; i++)
{
c = 0;
for ( ; c == 0; j++)
{
if (str[j] != 32 && str[j - 1] == 32)
{
k = j;
for ( ; str[j + 1] != 32; j++)
c++;
}
}
new_str[i] = (char *)malloc((c + 1) * sizeof(char) + 1);
if (new_str[i] == NULL)
return(NULL);
else
for ( ; str[k] != 32 && str[k] != '\0'; k++, in++)
new_str[i][in] = str[k];
}
return (new_str);
}
}


/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
