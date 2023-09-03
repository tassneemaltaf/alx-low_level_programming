#include <stdio.h>
/**
 * main - prints the program name
 * @argc: number of command line arguments
 * @argv: array that contains the programs command line arguments
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
