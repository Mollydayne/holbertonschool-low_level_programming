#include <stdio.h>
#include "main.h"

/**
* *_strpbk - searches for a car that matches accept
*@s : string where we search
*@accept : range of caracters we are looking for
*
* Return: count
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

