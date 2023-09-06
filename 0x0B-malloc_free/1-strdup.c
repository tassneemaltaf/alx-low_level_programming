#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string given to duplicate
 * Return: NULL if str=null else returns a pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *strcp;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	strcp = (char *) malloc(sizeof(char) * (i + 1));

	if (strcp == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strcp[j] = str[j];

	return (strcp);
}
