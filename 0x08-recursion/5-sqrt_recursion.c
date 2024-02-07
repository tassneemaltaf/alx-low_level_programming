#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer input
 * Return: returns square root of input
 *
 * sqrt_verify - does verification of square root
 * @num: square input
 * @i: counter
 */

int sqrt_verify(int num, int i);

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_verify(n, 1));
	}
	return (1);
}

int sqrt_verify(int num, int i)
{
	if (i * i == num)
	{
		return (i);
	}

	if (i * i > num)
	{
		return (-1);
	}

	return (sqrt_verify(num, i + 1));
}
