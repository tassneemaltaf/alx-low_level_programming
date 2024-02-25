/**
 * int_index - searches for an integer
 * @array: where to search
 * @size: size of array
 * @cmp: function that decides how to search
 * Return: returns -1 if size<=0, returns intfound
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
