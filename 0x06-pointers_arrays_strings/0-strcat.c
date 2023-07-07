#include "main.h"


/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
* Return: newly concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
