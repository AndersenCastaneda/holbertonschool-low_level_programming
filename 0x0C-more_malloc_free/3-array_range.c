#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: input
 * @max: input
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[i - min] = i;
	}

	return (ptr);
}
