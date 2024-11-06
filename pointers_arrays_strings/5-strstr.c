#include <stdio.h>
#include "main.h"

/**
* *_strstr - locates a substring
*@haystack : principal string
*@needle : substring we want to locate
*
* Return: substring
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
}
while (*haystack)
{
if (*haystack == *needle)
{
char *h = haystack;
char *n = needle;
while (*h && *n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
}
haystack++;
}
return (NULL);
}

