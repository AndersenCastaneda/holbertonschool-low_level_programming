#include <stdlib.h>
/**
 * *_realloc - reallocate a memory block
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *oldp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (ptr == NULL)
		return (p);
	if (p == NULL)
		return (NULL);
	oldp = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = oldp[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = oldp[i];
	}
	free(ptr);
	return (p);
}
