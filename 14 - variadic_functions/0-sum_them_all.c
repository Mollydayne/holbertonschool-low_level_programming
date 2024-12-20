#include "variadic_functions.h"

/**
 * sum_them_all- returns the sum of all its parameters
 *
 * @n: number of parameters to sum
 *
 *
 * Return: sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
va_list args;

if (n == 0)
return (0);

va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
