#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: returns length of string input
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum = 1 + _strlen_recursion(s + 1);
	}
	return (sum);
}
