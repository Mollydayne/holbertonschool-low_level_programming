#include  <stdio.h>
#include "main.h"
/**
*_isdigit - checks if a caracter is a digit or not
* @c : character that need to be checked
*Return: 0 or 1
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
