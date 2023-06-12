#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 *_strdup - duplicate to new memory space location
 * @str: char
 * return 0
 */
char *_strdup(char *str)
{
	char *st;
	int i, r;

	if(str==NULL)
		return(NULL);

	i=o;
	while(str!='\0')
		i++
	
	st = malloc((i+1)*sizeof(char);
	if (st == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		st[r] = str[r];

	return(st);
}
