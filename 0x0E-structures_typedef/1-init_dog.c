#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: struct dog
 * @name: dog name
 * @age: dog age
 * @owner:dog ownder
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);
}
