#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string of characters
 * Return: length of the string upon success, else 0
*/

int _strlen(char *s)
{
int length = 0;
while(s[length] != '\0')
length++;
return (length);
}

/**
 * str_concat - concatenates 2 strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to a newly allocated space containing the result of s1+s2
*/
char *str_concat(char *s1, char *s2)
{
int i = 0, s_len, c;
char *new_s;
s_len = _strlen(s1) + _strlen(s2);
new_s = (char *)malloc(s_len * sizeof(char));
while (s1[i] != '\0')
{
new_s[i] = s1[i];
i++;
}
i = _strlen(s1);
for (c = 0; s2[c]!= '\0'; c++,i++)
new_s[i] = s2[c];
return (new_s);
}


/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
