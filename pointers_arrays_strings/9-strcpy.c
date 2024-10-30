#include <stdio.h>
#include "main.h"
/**
* print_array - prints array
*@n : number of elements of an array
*@a : integer filling the array
* Return: void
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[1]!='\0'; i++)
{
src[i] = dest[i];
{
printf(", ");
}
dest[i] = '\0';
}
