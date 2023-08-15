#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - literally frees dogs.
 * @d: pointer to an object of dog_t.
 * Return: Nada.
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
}
free(d);
}
