#include  <stdio.h>
#include "main.h"
/**
*main - Entry point of the program
*
*print_alphabet: Prints alphabet in lowercase
*Return: nothing (void)
*/

void print_alphabet(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
