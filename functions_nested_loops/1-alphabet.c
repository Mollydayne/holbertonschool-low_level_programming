#include  <stdio.h>
#include "main.h"
/**
*main - Entry point of the program
*
*Description: Prints alphabet in lowercase
*Return: always 0
*/

void print_alphabet(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
return (0);
}
