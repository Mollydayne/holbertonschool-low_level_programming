#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - print them all
 * @type: the type of argument to print (e.g., 'c', 'i', 'f', 's')
 * @func: pointer to the function that prints the type
 */

typedef struct printer
{
char type;
void (*func)(va_list args, char *separator);
} printer_t;


#endif
