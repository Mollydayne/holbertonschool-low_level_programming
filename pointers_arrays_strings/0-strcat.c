#include <stdio.h>
#include "main.h"

/**
* _strcat - concatenate two strings
* 
* Return: void (no return value)
*/
char *_strcat(char *dest, char *src)
{
char *start = dest; //conserve l'adresse de départ de dest
while (*dest)
{
++dest;
}
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return start;
}
