#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog- frees the doggos
 *
 * @d: dogs we want to free
 *
 * Return: pointer to new dog_t, or NULL if it fails
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->owner);
free(d->name);
free(d);
}
