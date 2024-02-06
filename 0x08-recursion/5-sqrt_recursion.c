#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer input
 * Return: returns square root of input
 */
int _sqrt_recursion(int n)
{
	int num;
	
	num = n / 2;

	if ((num * num - n) < 0.0001)
	{
		if (num * num != n)
		{
			return (-1);
		}
		else
		{
			return (num);
		}
	}
	else
	{
		_sqrt_recursion(num + 2);
	}
	return (1);
}	
