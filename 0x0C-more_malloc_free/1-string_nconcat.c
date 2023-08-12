#include "main.h"

/**
 * _strlen - Entry function
 * @s: pointer int
 * Return: 0.
 */
unsigned int _strlen(char *s)
{
unsigned int len = strlen(s);
return (len);
}

/**
 * _strcpy - copies a sting src to buffer dest
 * @dest: buffer in which src is to be copied
 * @src: string to be copied into the dest buffer
*/
void _strcpy(char *dest, const char *src)
{
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
}

/**
 * _strncat - Entry function
 * @dest: pointer to char type
 * @src: pointer to char type
 * @n: number of bytes in src to concatenate with dest
 */
void _strncat(char *dest, char *src, int n)
{
int i, dest_len;
dest_len = strlen(dest);
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1, to be moved as a whole
 * @s2: string 2, whose first n bytes will be concatenated
 * to s1 (already copied in a new buffer)
 * @n: number of bytes of s2 to be copied
 * Return: pointer to the newly allocated block of memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_block;

if (n >= _strlen(s2))
n = _strlen(s2);

if (s2 == NULL)
n = 0;

new_block = (char *)malloc(n + _strlen(s1) + 1);
if (new_block == NULL)
{
free(new_block);
return (NULL);
}

_strcpy(new_block, s1);
_strncat(new_block, s2, n);
return (new_block);
}
