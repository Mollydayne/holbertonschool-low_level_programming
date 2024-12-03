#include <stdio.h>
#include "main.h"

/**
* *string_toupper - to change lowercase to uppercase
*@* : char to be changed
*@s : string to be changed
* Return: char
*/
char *string_toupper(char *s)
{
char *original = s;
while (*s != '\0')
{
if (*s >= 'a' && *s <= 'z')
{
*s = *s - 32;
}
s++;
}
return (original);
}
