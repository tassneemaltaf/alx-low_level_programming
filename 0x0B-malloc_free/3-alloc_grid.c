#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: rows
 * @height: columns
 * Return: returns pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(width * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	
	return (arr);

	for (i = 0; i < width; i++)
		free(arr[i]);

	free(arr);
}
