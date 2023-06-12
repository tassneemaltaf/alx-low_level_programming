#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ch;

	ch = malloc(size*sizeof(char));

	if(size==0 || ch == NULL)
	{
		return NULL;
	}

	for(int i = 0; i < size; i++)
	{
		ch[i]=c;
	}
	return ch;
}
