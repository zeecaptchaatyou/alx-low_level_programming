#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: alias of struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: Nada.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return (NULL);
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
