#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: char that separates strings
 * @n: number os strings
 * Return: returns nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	unsigned int i;

	va_start(my_strings, n);

	if (separator == NULL)
	{
		exit(98);
	}

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%s ", va_arg(my_strings, char *));
		}
		else
		{
			printf("%s%s ", va_arg(my_strings, char *), separator);
		}
	}
	printf("\n");
	va_end(my_strings);
}
