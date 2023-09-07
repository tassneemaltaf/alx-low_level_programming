#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size of bytes
 * Return: null if malloc fails, pointer to array if succeeds
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(sizeof(size) * nmemb);

	if (ar == NULL)
		return (NULL);

	return (ar);
}
