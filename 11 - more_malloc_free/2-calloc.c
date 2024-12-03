#include <stdlib.h>
#include "main.h"

/**
 * _calloc- allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: number of bytes in the array
 *
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ArrayMem;
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ArrayMem = malloc(size * nmemb);
if (ArrayMem == NULL)
return (NULL);

ptr = ArrayMem;
for (i = 0; i < (size * nmemb); i++)
ptr[i] = '\0';
return (ArrayMem);
}
