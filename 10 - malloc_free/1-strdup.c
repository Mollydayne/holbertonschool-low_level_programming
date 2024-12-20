#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates the string given as parameter
 *
 * @str: string to duplicate
 *
 * Return: pointer to the copy (Success), NULL (Error)
 */

char *_strdup(char *str)
{
char *dup;
unsigned int len = 0, i;
if (str == NULL)
return (NULL);
for (len = 0; str[len] != '\0'; len++)
;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';
return (dup);
}

