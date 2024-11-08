#include <stdio.h>
#include "main.h"

/**
* factorial - calculate the factorial of a given number
*@n : integer for wich we want factorial
*
* Return: factorial of n or -1 if n is a neg
*/

int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
