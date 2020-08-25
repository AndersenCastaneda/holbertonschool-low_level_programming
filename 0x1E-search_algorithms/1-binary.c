#include "search_algos.h"

/**
 * print_array - Prints an array
 * @array: Array to print
 * @start: Start point of the array
 * @end: End point of the array
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		if (start < end)
			printf("%d, ",array[start]);
		else
			printf("%d\n",array[start]);
	}
}

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: The array to search in
 * @size: Lenght of the array
 * @value: Value to search for
 * Return: The index where value was found, if the value
 * is not found or array is null return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, num;

	if (!array)
		return (-1);

	while (start <= end)
	{
		print_array(array, start, end);
		num = (start + end) / 2;
		if (value < array[num])
			end = num - 1;
		else if (value == array[num])
			return num;
		else
			start = num + 1;
	}

	return (-1);
}
