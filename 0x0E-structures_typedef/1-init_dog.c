#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: alias of struct dog and also a new instance of it
 * @name: first member and name of dog
 * @age: second member and age of dog
 * @owner: third member and owner of dog(obviously)
 * Return: Nada.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
