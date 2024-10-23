#include  <stdio.h>
#include "main.h"
/**
*_islower - checks if a caracter is lowercase or not
* @c : character that need to be checked
*Return: 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
