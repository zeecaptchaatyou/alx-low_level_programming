#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*Return: NULL If the function fails a pointer to the
*concatenated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int len = n, index;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (index = 0; s1[index]; index++)
len++;
new_str = malloc(sizeof(char) * (len + 1));

if (new_str == NULL)
return (NULL);

len = 0;

for (index = 0; s1[index]; index++)
new_str[len++] = s1[index];

for (index = 0; s2[index] && index < n; index++)
new_str[len++] = s2[index];

new_str[len] = '\0';

return (new_str);
}
