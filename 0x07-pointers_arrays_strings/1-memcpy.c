#include "main.h"
/*
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 *
 * returnd a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	for(int i = n;r<i;i++)
	{
		strcpy(dest[i], src[i]);
		n--;
	}
	return (dest);
}
