#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string tw
 * Return: returns a pointer to the strng that will contain the concatenation
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int i;
	int lendef;
	char *concat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[length1] != '\0')
	{
		length1++;
	}

	while (s2[length2] != '\0')
	{
		length2++;
	}

	lendef = length1 + length2;

	concat = (char *)malloc((lendef + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		concat[i] = s1[i];
	}

	for (i = 0; i < length2; i++)
	{
		concat[i + length1] = s2[i];
	}

	concat[lendef] = '\0';
	return (concat);
}
