#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct to print
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("%f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
