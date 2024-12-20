#include <stdlib.h>
#include "main.h"

/**
 * array_range- creates an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 *
 * Return: pointer to the newly created array
 */



int *array_range(int min, int max)
{

int *array;
int i;
int size;

if (min > max)
return (NULL);

if (max - min + 1 <= 0)
return (NULL);

size = max - min + 1;

array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);

for (i = 0; min <= max; i++)
array[i] = min++;
return (array);
}
