#include <stdio.h>
#include "main.h"

/**
* _strcat - concatenate two strings
*@dest : string 1
*@src : string 2
* Return: void (no return value)
*/
char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest)
{
++dest;
}
while (*src)
{
*dest++ = *src++;
}
*dest = '\0';
return (start);
}
