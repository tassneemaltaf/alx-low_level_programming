#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number input
 * Return: -1 if number doesnt have square root
 */
int _sqrt_recursion(int n)
{
	return (square_minus(n, 1));
}
/**
 * square_minus - return square of number by subtracting with odd nums
 * @n: number input
 * @y: odd nums
 * Return: -1 if n < 0, 0 n=0, returns square
 */
int square_minus(int n, int y)
{
	int minus = n - y;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (1 + square_minus(minus, y + 2));
}
