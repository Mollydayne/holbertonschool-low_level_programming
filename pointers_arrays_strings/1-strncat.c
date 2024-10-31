#include <stdio.h>
#include "main.h"

/**
* _strncat - concatenate two strings
*@dest : string 1
*@src : string 2
*@n : number of caracters to add
* Return: start
*/
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
while (*dest)
{
dest++;
}
while (n-- > 0 && *src)
{
*dest++ = *src++;
}
*dest = '\0';
return (start);
}
