#include  <stdio.h>
#include "main.h"
/**
*more_numbers - print numbers from 0 to 14, 10 times
*
*Return: void (no return value)
*/
void more_numbers(void)
{
int i, ch;
for (i = 1; i <= 10; i++)
{
for (ch = 0; ch <= 14; ch++)
{
if (ch >= 10)
_putchar('0' + ch / 10);
_putchar('0' + ch % 10);
}
_putchar('\n');
}
}
