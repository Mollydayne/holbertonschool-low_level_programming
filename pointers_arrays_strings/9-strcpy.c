#include <stdio.h>
#include "main.h"
/**
* _strcpy - copy a string
*@dest : destination array
*@src:source string
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
}
