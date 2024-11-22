#include "variadic_functions.h"

/**
 * print_strings- prints strings, followed by a new line
 * @n: number of strings passed to the function
 * @separator: string to be printed between numbers
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
char *str;

if (n == 0)
{
printf("\n");
return;
}
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("NILL");
else
printf("%s", str);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
