#include "3-calc.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
/**
 * (*get_op_func(char *s)) - function that executes the right function with input operator
 * @s: operator
 */
int (*get_op_func(char *s))(int, int)
{
	unsigned long int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < sizeof(ops))
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		++i;
	}
	printf("Error\n");
	return (NULL);
}
