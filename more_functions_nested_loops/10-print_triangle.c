#include  <stdio.h>
#include "main.h"
/**
*print_triangle - function that prints a triangle
*@size : size of the triangle
*Return: void (no return value)
*/
void print_triangle(int size)
{
int a, b;
if (size <= 0)
{
_putchar('\n');
return;
}
for (a = 1; a <= size; a++)
{
for (b = 0; b < size - b; b++)
{
_putchar(' ');
}
for (b=0; b < a; a++)
{
  _putchar('#');
}
_putchar('\n');
}
}
