#include <stdio.h>
#include "main.h"

/**
* *cap_string - to transform a string in uppercase
*
*@s : string to be changed
* Return: modified string
*/
char *cap_string(char *s)
{
char *ptr = s;
char spe[13] = {' ', '\t', '\n', ',',
';', '.', '!', '?', '"', '(', ')', '{', '}'};
int j;
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
}
while (*ptr != '\0')
{
for (j = 0; j < 13; j++)
{
if (*ptr == spe[j])
{
if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
{
*(ptr + 1) -= 32;
}
break;
}
}
ptr++;
}
return (s);
}
