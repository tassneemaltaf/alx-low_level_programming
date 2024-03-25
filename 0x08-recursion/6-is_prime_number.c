#include <stdio.h>
/**
 * divisor_check - checks if its divisible with other numbers
 * @div: divisor
 * @n: number input to check if is prime
 * Return: returns 0 or 1
 */
int divisor_check(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}
	else if (n % div == 0)
	{
        	return (0);
	}
	else
	{
	        return (divisor_check(n, div + 1));
	}
}

/**
 * is_prime_number - prints 1 if number is prime and 0 if not
 * @n: number input
 * Return: returns 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (divisor_check(n, 2));
	}
	return (1);
}
