#include <stdio.h>

/*
 * main - prints the name followed by a new line
 * @argc: number of command line arguments
 * @argv: array that contains pointers to command line arguments
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
