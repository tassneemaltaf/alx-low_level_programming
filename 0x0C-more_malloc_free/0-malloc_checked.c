#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: input
 * Return: 98 if fails, pointer to memory if success
 */
void *malloc_checked(unsigned int b)
{
	int *p = (int *) malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
