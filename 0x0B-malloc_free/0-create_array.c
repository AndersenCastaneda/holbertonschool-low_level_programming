#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates and initializes an array
 * @size: input
 * @c: input
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	ptr = malloc(size * sizeof(char));

	if (ptr == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
