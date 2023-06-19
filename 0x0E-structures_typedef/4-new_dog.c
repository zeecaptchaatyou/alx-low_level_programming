#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog creates a new dog.....whatev tf that means
 * @name: first member of struct dog_t
 * @age: second member
 * @owner: third member
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdoggy = (dog_t *)malloc(sizeof(dog_t));
if (newdoggy == NULL)
{
free(newdoggy);
return (NULL);
}
newdoggy->name = name;
newdoggy->age = age;
newdoggy->owner = owner;
return (newdoggy);
}
