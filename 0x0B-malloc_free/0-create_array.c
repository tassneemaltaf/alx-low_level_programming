#include <stdlib.h>
/**
 * *create_array - creates an array, and initializes it with a specific char.
 * @size: size of array
 * @c: char to intilize array
 * Return: returns a pointer to array created or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;


	return (arr);
}
