#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs structs in mem.
 * @d: dog struct to be freed
 * Return: returns nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
