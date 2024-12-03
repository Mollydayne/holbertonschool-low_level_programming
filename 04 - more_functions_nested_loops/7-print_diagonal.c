#include  <stdio.h>
#include "main.h"
/**
*print_diagonal - draws line in the terminal
*@n : number of time the \ will be printed
*Return: void (no return value)
*/
void print_diagonal(int n)
{
int a, b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
