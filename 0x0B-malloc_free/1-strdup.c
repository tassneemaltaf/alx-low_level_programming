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

	strcp = (char *) malloc(sizeof(str));

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		strcp[i] = str[i];
		i++;
	}

	strcp[i] = '\0';

	return (strcp);
}
