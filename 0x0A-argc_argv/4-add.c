#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line args
 * @argv: command line args
 * Return: returns 0 if successful.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if(argv[1] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	if(argc > 1)
	{
		for(i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
