#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string that separates number
 * @n: number of inputs
 * Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_nums;
	unsigned int i;

	va_start(my_nums, n);

	if (separator == NULL)
        {
                exit(98);
        }

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d ", va_arg(my_nums, int));
		}
		else
		{
			printf("%d%s ", va_arg(my_nums, int), separator);
		}
	}
	printf("\n");
	va_end(my_nums);
}
