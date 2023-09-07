#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: input
 * Return: 98 if fails, pointer to memory if success
 */
void *malloc_checked(unsigned int b)
{
	int *p = (int *) malloc(b);

	if (p == NULL)
		printf("%d\n", 98);

	return (p);
}
