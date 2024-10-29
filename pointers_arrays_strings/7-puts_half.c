#include <stdio.h>
#include "main.h"
/**
* puts_half - prints half the length of a string
*@str : pointer to string
* Return: void
*/

void puts_half(char *str)
{
int len = 0;
char *start = str;
while (*str != '\0')
{
len++;
str++;
}
start = str + (len / 2);
for (int i = len / 2; i < len; i++)
{
_putchar(start[i]);
}
_putchar('\n');
}
