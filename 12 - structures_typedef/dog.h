#ifndef DOG_H
#define DOG_H

/**
 * struct dog - DOGGOS
 * @name: name of a cute doggo
 * @age: age of doggo
 * @owner: owner of a fantastic doggo
 *
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
