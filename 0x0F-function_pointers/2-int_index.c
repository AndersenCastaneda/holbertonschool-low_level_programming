/**
 * int_index - search an integer in an array
 * @array: array
 * @size: array's length
 * @cmp: pointer to compare function
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)

		if (size <= 0)
			return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
