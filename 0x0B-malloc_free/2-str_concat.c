#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string
 * Return: null if fails, pointer to mem location
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i = 0;
	int j = 0;
	int k, limit;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	new = (char *) malloc(sizeof(char) * (i + j + 1));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		new[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		new[k] = s2[k];

	return (new);
}
