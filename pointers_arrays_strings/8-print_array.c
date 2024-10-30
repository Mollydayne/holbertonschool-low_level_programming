#include <stdio.h>
#include "main.h"
/**
* print_array - prints array
*@n : number of elements of an array
*@a : integer filling the array
* Return: void
*/

void print_array(int *a, int n)
{
for (int i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
