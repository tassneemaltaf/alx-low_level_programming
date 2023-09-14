#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints numbers, followed by a new line.
 * @separator: string printed between numbers
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
	char *str;
        va_list args;

        va_start(args, n);

        for (i = 0; i < n; i++)
        {
                str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s%s ", str, separator);
		else
			printf("%s ", str);
	}

	printf("\n");

	va_end(args);
}
