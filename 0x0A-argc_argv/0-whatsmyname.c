#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line args
 * @argv: command line args
 * Return: returns 0 if success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
