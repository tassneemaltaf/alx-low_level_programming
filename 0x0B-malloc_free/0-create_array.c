#include <stdlib.h>
/**
 * create_array - creates array and initializes it with specific char
 * @size  - memory size to allocate
 * @c: char to initialize
 * Return: null if size = 0, returns a pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(c) * size);
	
	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
