#include  <stdio.h>
#include "main.h"
/**
*main - Entry point of the program
*
*Description: Prints alphabet in lowercase
*Return: always 0
*/

int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
