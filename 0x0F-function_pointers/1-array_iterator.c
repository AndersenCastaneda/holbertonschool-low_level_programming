#include "function_pointers.h"

/**
 * array_iterator - xecute a function given as a
 * parameter on each element of an array
 * @array: array
 * @size: array's length
 * @action: pointer to action function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
