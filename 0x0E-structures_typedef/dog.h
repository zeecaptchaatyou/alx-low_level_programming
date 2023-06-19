#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - creates a dog
 * @name: first member and name of dog
 * @age: second member and age of dog
 * @owner: third member and owner of dog
*/
struct  dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - a new instance of struct dog(also a typedef of struct dog)
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
