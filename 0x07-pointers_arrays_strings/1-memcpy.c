#include "main.h"
/*
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 *
 * returnd a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for(int i = 0; n>0;i++)
	{
		src[i]=dest[i];
		n--;
	}
}
