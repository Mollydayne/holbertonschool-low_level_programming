#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/**
*main - Entry point of the program
*
*Description: Prints numbers with putchar only
*Return: always 0
*/

int main(void)
{
char ch = 'z';
for (ch = 'z'; ch >= 'a'; ch--)
putchar(ch);
putchar('\n');
return (0);
}
