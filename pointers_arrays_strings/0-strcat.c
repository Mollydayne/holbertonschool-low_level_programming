#include <stdio.h>
#include "main.h"

/**
* _strcat - concatenate two strings
*@dest : string 1
*@src : string 2
*@n : 
* Return: string copied
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
