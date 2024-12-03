#include  <stdio.h>
#include "main.h"
/**
 *print_numbers - print numbers from 0 to 9
*
*Return: void (no return value)
*/
void print_numbers(void)
{
char ch = '0';
for (ch = '0'; ch <= '9'; ch++)
_putchar(ch);
_putchar('\n');
}
