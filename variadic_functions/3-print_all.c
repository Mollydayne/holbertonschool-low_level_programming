#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: variadic arguments
 * @separator: string to print before the character
 */

void print_char(va_list args, char *separator)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: variadic arguments
 * @separator: string to print before the integer
 */

void print_int(va_list args, char *separator)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: variadic arguments
 * @separator: string to print before the float
 */

void print_float(va_list args, char *separator)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: variadic arguments
 * @separator: string to print before the string
 *
 * Prints "(nil)" if the string is NULL.
 */

void print_string(va_list args, char *separator)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
}

/**
 * print_all - prints anything asked
 * @format: list of argument types to print
 *
 */

void print_all(const char * const format, ...)
{
printer_t printers[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};
va_list args;
unsigned int i = 0, j;
char *separator = "";
va_start(args, format);
while (format[i])
{
j = 0;
while (printers[j].type != '\0')
{
if (printers[j].type == format[i])
{
printers[j].func(args, separator);
separator = ", ";
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
