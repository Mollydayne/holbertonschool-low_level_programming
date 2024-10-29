#include <stdio.h>
#include "main.h"
/**
* _strlen - print the length of a string
*@s : pointer to stock
* Return: strlen
*/

int _strlen(char *s)
{
int len = 0;
while (*s != 0)
{
s++;
len++;
}
return (len / 2);
}
