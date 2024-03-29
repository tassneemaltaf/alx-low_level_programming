#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d - struct to be printed
 * Return: returns nothing
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: %s\n", "(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == 0.0)
	{
		printf("Age: %s\n", "(nil)");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: %s\n", "(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
