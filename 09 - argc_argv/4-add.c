#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Checks if a string is number
 * @str: The string to check
 *
 * Return: 1 if the string is a positive number, 0 if not
 */
int is_positive_number(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
{
return (0);
}
}
return (1);
}

/**
 * main - Adds positive
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if ok, 1 if notok
 */
int main(int argc, char *argv[])
{
int i;
int result = 0;
for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
result += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", result);
return (0);
}
