#include  <stdio.h>
#include "main.h"
/**
*print_sign - prints the sign of a number
* @n : character that need to be checked
*Return: 0 or or -1
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}
