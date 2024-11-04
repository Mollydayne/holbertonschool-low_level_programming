#include <stdio.h>
#include "main.h"

/**
* *_memcpy -  copies memory area
*@dest : memory area where to copy
*@src : memory source to copy to dest
*@n : number of bytes to be copied
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
