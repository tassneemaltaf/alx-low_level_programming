#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that puts everything together
 * @agc: number of command line args
 * @argv: command line args
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *op = argv[2];

	if (argv[0] == NULL || argv[1] == NULL || argv[2] == NULL)
	{
		return (-1);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
