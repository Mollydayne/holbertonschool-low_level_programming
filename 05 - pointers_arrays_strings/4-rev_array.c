#include <stdio.h>
#include "main.h"

/**
* reverse_array - to reverse an array
*@a : name of the array
*@n : number of elements in the array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;
int temp;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
