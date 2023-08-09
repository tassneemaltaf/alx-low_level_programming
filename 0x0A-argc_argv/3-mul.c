#include <stdio.h>
#include <stdlib.h>
/*
 * main - multiplies numbers.
 * @argc: numbers of command line argumrnts
 * @argv: array that contains pointers to command line arguments
 * Return: 0 if success and 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}


