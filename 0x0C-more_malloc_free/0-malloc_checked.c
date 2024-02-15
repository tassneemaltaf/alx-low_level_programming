#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: input
 * Return: returns a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
