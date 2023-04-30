#include "main.h"
/**
 * _strbrk - Entry point
 * @s - input
 * @accept - input
 * return 0 (Sucess)
 */
char *_strpbrk(char *s, char *accept)
{
	int l;
	while(*s)
	{
		for(l=0;accept[l];l++)
		{
			if(*s==accept[k])
			{
				return(s);
			}
		}
		s++;
	}
	return('\0');
}
