#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of parameters, or 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum = sum + x;
	}

	return (sum);

}
