#include "3-calc.h"

/**
 * get_op_func - correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 *
 *
 *Return: A pointer to the function corresponding to the operator
 */

int (*get_op_func(char *s))(int, int)
{
int i = 0;

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

while (ops[i].op)
{
if (strcmp(ops[i].op, s) == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
