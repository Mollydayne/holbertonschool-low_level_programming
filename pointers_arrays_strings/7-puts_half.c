#include <stdio.h>
#include "main.h"
/**
* puts_half - prints half the length of a string
*@str : pointer to string
* Return: len / 2
*/

void puts_half(char *str)
{
int len = 0;
while (*str != 0)
{
str++;
len++;
}
return (len / 2);
}
