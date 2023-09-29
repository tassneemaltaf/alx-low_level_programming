#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string input in binary
 * Return the converted int, or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		
		result = (result << 1) + (*b - '0');
		b++;
	}
	
	return (result);
}
