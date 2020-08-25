#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: The array to search in
 * @size: Lenght of the array
 * @value: Value to search for
 * Return: The index where value was found, if the value
 * is not found or array is null return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
