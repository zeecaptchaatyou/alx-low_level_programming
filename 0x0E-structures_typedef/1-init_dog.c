#include <stddef.h>
#include "dog.h"
/**
 * @init_dog - function that initializes stuct dog
 * @d - pointer to struct dog & argument 1
 * @name - argument 2
 * @age -argument 3
 * @owner - argument 4
*/
void init_dog(struct dog *d, char *name, float age, char *owner)  {
    (*d).name = name;
    d->owner = owner;
    d->age = age
}