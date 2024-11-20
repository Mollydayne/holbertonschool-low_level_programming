#include "variadic_functions.h"

/**
 * print_numbers- prints numbers, followed by a new line
 * @n: number of parameters
 * @separator: string to be printed between numbers
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;

if (n == 0)
return;

va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
