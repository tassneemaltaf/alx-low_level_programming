#include "main.h"
/**
 * is_prime_number - verifies if input is prime num
 * @n: input
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	if (n % 2 == 0 || n % 5 == 0)
		return (0);

	return ((prime_check(n, 1)));
}
/**
 * prime_check - checks if number is only divided by 1 and by itself
 * @n: number input
 * @y: number divided
 * Return: 0 if n < 1, 1 if n=2, 1 if it is prime
 */
int prime_check(int n, int y)
{
	if (n % y == 0 && (y != 1 && y != n))
		return (0);

	if (y > n)
		return (1);

	return (prime_check(n, y + 1));
}
