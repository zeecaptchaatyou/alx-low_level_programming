#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of its argument string
 * @arr: string to be measured
 * Return: length of arr
*/
int _strlen(char *arr)
{
int i = 0;
while (arr[i])
i++;
return (i);
}

/**
 * _strcpy - copies contents of src to buffer pointed to by dest
 * @dest: destination of the process
 * @src: source string and string to be copied
 * Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
for ( ; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog.....whatev tf that means
 * @name: first member of struct dog_t and name of the new dog
 * @age: second member and age of the new dog
 * @owner: third member and owner of the new dog
 * Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int len = 0;
dog_t *newdoggy = (dog_t *)malloc(sizeof(dog_t));

if (newdoggy == NULL)
{
free(newdoggy);
return (NULL);
}
else
{
len = _strlen(name);
newdoggy->name = (char *)malloc((len *sizeof(char)) + 1);
if (newdoggy->name == NULL)
{
free(newdoggy->name);
return (NULL);
}
newdoggy->name = _strcpy(newdoggy->name, name);
newdoggy->age = age;
len = _strlen(owner);
newdoggy->owner = (char *)malloc((len *sizeof(char) + 1));
if (newdoggy->owner == NULL)
{
free(newdoggy->owner);
return (NULL);
}
newdoggy->owner = _strcpy(newdoggy->owner, owner);
return (newdoggy);
}
}
