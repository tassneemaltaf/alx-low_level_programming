#include "main.h"
/*
 * unsigned int _strspn(char *s, char *accept) - Returns the number of bytes in the initial segment of s which consist only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;
	while(*s)
	{
		for(r = 0; accept[r]; r++)
		{
			if(accept[r]==*s)
			{
				n++;
				break;
			}
			else if(accept[r+1] == '\0')
			{
				return(n);
			}
		}
		s++;
	}
}	
