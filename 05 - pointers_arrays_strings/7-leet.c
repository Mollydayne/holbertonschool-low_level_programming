#include <stdio.h>
#include "main.h"
/**
 * *leet - change to leet
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *leet(char *s)
{
char *ptr = s;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
int j;
while (*ptr != '\0')
{
for (j = 0; j < 10; j++)
{
if (*ptr == a[j])
{
*ptr = b[j];
break;
}
}
ptr++;
}
return (s);
}
