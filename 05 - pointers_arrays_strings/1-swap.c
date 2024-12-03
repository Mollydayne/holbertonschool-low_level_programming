#include <stdio.h>
#include "main.h"
/**
* swap_int - swaping pointers
* @a: first pointer
* @b: second pointer
* Return: void (no return value)
*/

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
