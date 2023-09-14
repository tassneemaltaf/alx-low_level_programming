#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string printed between numbers
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		if (i != (n - 1) && separator != NULL)
			printf("%d%s ", x, separator);
		else
			printf("%d ", x);
	}

	printf("\n");

	va_end(args);
}
