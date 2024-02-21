#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * *new_dog - creates a new dog.
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner name
 * Return: returns a struct dog_t if successful and NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptdog;

	ptdog = malloc(sizeof(dog_t));

	ptdog->name = malloc(strlen(name) + 1);
	if (ptdog->name == NULL)
	{
		return (NULL);
	}
	strcpy(ptdog->name, name);

	ptdog->age = age;

	ptdog->owner = malloc(strlen(owner) + 1);
	if (ptdog->owner == NULL)
	{
		return (NULL);
	}
	strcpy(ptdog->owner, owner);

	return (ptdog);
}
