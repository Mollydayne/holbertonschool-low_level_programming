#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/**
*main - Entry point of the program
*
*Description: Prints base 16
*Return: always 0
*/

int main(void)
{
char ch = '0';
for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
if (ch != '9')
{
putchar(',');
}
putchar('\n');
return (0);
}
