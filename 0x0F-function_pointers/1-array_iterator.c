#include <stddef.h>
/**
 * array_iterator - executes a function on each element of an array.
 * @array: the array to iterate through
 * @size: size of the array
 * @action: function that decides how to print each element of array
 * Return: returns nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
