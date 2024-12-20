#include <stdio.h>
#include "main.h"

/**
* is_prime_helper - integer 1 other 0
*@n : number tested
*
*@i : tested number above 2
* Return: int
*/

int is_prime_helper(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 1));
}

/**
* is_prime_number - 0 if under 2
*@n : number tested
*
* Return: int
*/

int is_prime_number(int n)
{
if (n < 2)
return (0);
return (is_prime_helper(n, 2));
}

