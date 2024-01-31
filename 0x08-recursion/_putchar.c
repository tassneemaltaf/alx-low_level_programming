#include <unistd.h>
/*
 * _putchar - prints characters
 * @c: character input to be printed
 * Returns: nothing
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
