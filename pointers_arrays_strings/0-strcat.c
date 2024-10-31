#include <stdio.h>
#include "main.h"

/**
* _strcat - concatenate two strings
* 
* Return: void (no return value)
*/
char *_strcat(char *dest, char *src)
{
while (*dest)
{
++dest;
}
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return dest
}
