#include <stdlib.h>
/**
 * *_strdup - creates a copy of the string given as a parameter
 * @str: duplicated string
 * Return: returns a pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *strdup;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;
	}

	strdup = (char *)malloc((length + 1) * sizeof(char));

	if (strdup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		strdup[i] = str[i];

	return (strdup);
}
