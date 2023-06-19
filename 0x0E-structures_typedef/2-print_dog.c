#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog alias
 * Return: Nada
*/
void print_dog(struct dog *d)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name,d->age,d->owner);
}
