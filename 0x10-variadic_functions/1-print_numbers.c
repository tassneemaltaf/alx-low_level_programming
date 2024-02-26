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
	int num;

	va_start(my_nums, n);

	if (separator == NULL)
        {
                return;
        }

	for (i = 0; i < n; i++)
	{
		num = va_arg(my_nums, int);

		if (i == (n - 1))
		{
			printf("%d ", num);
		}
		else
		{
			printf("%d%s ", num, separator);
		}
	}
	printf("\n");
	va_end(my_nums);
}
