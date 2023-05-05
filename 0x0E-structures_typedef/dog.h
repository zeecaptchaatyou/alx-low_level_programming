#ifndef DOG_H
#define DOG_H

/**
 *  struct dog - the shape of a dog, lmao :)
 *  @name - member 1
 *  @age - member 2
 *  @owner - member 3
*/
struct dog {
    char *name;
    float age;
    char *owner;
};


/**
 *  dog_t - (struct dog)'s alias :)
 *  @name - member 1
 *  @age - member 2
 *  @owner - member 3
*/
typedef struct dog dog_t {
    char *name;
    float age;
    char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif