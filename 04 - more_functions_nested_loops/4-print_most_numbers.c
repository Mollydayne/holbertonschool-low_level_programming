#include  <stdio.h>
#include "main.h"
/**
 *print_most_numbers - print numbers from 0 to 9 byt not 2 and 4
*
*Return: void (no return value)
*/
void print_most_numbers(void)
{
char ch = '0';
for (ch = '0'; ch <= '9'; ch++)
{
if (ch == '2' || ch == '4')
{
continue;
}
_putchar(ch);
}
_putchar('\n');
}
