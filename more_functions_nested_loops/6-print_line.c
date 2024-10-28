#include  <stdio.h>
#include "main.h"
/**
*print_line - draws line in the terminal
*@n : number of time the _ will be printed
*Return: void (no return value)
*/
void print_line(int n)
{
if (n > 0)
{
for (int a = 0; a < n; a++)
{
_putchar('_');
}
}
_putchar('\n');
}

