#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator- executes a function given as a
 * parameter on each element of an array
 *
 * @array: array with functions parameters
 * @size: size of the array
 * @action: pointer to the function used to callback
 *
 * Return: VOID
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
