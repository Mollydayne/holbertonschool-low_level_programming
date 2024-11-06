#include <stdio.h>
#include "main.h"

/**
* *_strpbrk - searches a string for a set of bytes
*@s : string to search in
*@accept : string containing the bytes to search for
*
* Return: a pointer to occurence or NULL
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}

