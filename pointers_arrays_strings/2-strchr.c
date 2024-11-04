#include <stdio.h>
#include "main.h"

/**
* *_strchr - locates a character in a string
*@s : string where we search for a specific c
*@c : caracter we are looking for
*
* Return: c or NULL
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
