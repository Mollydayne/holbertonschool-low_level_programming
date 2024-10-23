#include  <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - Prints the alphabet x10
*
*Return: void (no return value)
*/

void print_alphabet_x10(void)
{
char ch = 'a';
int i;
for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
