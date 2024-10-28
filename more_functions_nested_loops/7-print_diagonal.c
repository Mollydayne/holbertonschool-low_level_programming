#include  <stdio.h>
#include "main.h"
/**
*print_diagonal - draws line in the terminal
*@n : number of time the \ will be printed
*Return: void (no return value)
*/
void print_diagonal(int n)
{
int a;
if (n > 0)
{
for (a = 0; a < n; a++)
{
_putchar('\');
}
}
_putchar('\n');
}

