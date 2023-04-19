#include "main.h"
/*
 * The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *
 * returns a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	for(int i=n;i>0;i--)
	{
		s[i]=b;
	}
	return(s);
}
