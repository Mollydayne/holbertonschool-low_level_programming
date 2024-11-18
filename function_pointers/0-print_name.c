#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name- function that prints a name
 *
 * @name: name we want to print
 * @f: pointer to function with char argument
 *
 *
 * Return: VOID
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL || f != NULL)
return f(name);
}
