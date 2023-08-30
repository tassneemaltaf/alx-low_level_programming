#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string
 * Return: 0 if successful
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
