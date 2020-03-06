#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: input
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	if (b <= 0)
		exit(98);

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
