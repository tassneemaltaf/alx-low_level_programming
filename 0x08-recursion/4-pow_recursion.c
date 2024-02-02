#include <stdio.h>
/**
 * _pow_recursion - calculates the value of x raised to the power of y.
 * @x: first integer input raised to the power of y
 * @y: second integer input
 * Return: returns value of first input raised to number of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 0)
	{
		return (1);
	}
	else
	{
		return x * _pow_recursion(x, y - 1);
	}
}
