#include <stdio.h>
/**
 * read_textfile -  reads a text file and prints it to the standard output.
 * @filename: ptr to file
 * @letters: number of letters in file
 * Return: actual number of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	int c;
	size_t i = 0;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	while (letters != 0)
	{
		c = fgetc(fp);
		if (feof(fp))
		{
			break;
		}
		printf("%c", c);
		--letters;
		++i;
	}
	fclose(fp);
	return (i);
}
