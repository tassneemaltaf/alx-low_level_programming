#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arg
 * @argv: command line args
 * Return: returns 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
