#include  <stdio.h>
#include "main.h"
/**
*print_alphabet - Prints the alphabet in lowercase
*
*Return: void (no return value)
*/

void print_alphabet(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
