#include <stdio.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function that decides how to print the name
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
