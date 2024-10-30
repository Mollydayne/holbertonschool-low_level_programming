#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints one of 2 character
 * @str: pointer to check the string
 */
void puts2(char *str)
{
while (*str != '\0')
{
putchar(*str);
str += 2;
}
_putchar('\n');
}
