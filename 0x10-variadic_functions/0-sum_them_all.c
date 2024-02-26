#include <stdarg.h>
/**
 * sum_them_all - function that sums all inputs
 * @n: number of integers to sum
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_nums;
	unsigned int i;
	int result = 0;

	va_start(sum_nums, n);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sum_nums, int);
	}

	va_end(sum_nums);
	return (result);
}
