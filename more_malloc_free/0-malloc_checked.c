#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: unsigned int we allocate memory for
 *
 * Return: pointer to the allocated memory of 98
 */
void *malloc_checked(unsigned int b)
{
void *check;
check = malloc(b);
if (check == NULL)
exit(98);
return (check);
}
