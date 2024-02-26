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
	char *str;
	unsigned int i;

	va_start(my_strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_strings, char *);

		printf("%s ", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_strings);
}
