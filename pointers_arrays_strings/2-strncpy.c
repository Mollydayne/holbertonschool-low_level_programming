#include <stdio.h>
#include "main.h"

/**
* _strncpy - copy strings
*@dest : string 1
*@src : string 2
*@n : number of caracters to add
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return dest;
}
