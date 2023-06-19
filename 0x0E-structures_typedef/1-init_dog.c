#include "dog.h"

/**
 * init_dog - initializes a variable of type strcut dog
 * @d: alias of sttuct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: Nada.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
