#include  <stdio.h>
#include "main.h"
/**
*print_square - function that prints a square
*@size : size of the square
*Return: void (no return value)
*/
void print_square(int size)
{
int a, b;
for (a = 0; a <= size; a++)
{
_putchar('#');
}
for (b = 0; b <= size; b++)
{
_putchar('#');
_putchar('\n');
}
{
if (size <= 0)
_putchar('\n');
}
}
