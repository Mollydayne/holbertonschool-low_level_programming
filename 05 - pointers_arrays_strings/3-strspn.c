#include <stdio.h>
#include "main.h"

/**
* *_strspn - gets the length of a prefix substring
*@s : string where we search
*@accept : range of caracters we are looking for
*
* Return: count
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *a;
while (*s)
{
int found = 0;
for (a = accept; *a; a++)
{
if (*s == *a)
{
found = 1;
count++;
break;
}
}
if (!found)
{
break;
}
s++;
}
return (count);
}
