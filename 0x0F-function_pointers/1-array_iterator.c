#include "function_pointers.h"

/**
 * array_iterator - xecute a function given as a
 * parameter on each element of an array
 * @array: array
 * @size: array's length
 * @action: pointer to action function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((!array || !action) && size > 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
