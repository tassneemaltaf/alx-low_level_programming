#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of command line args
 * @argv: command line args
 * Return: returns 0 if success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
