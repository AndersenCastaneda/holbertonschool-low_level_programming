#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - copies the string given as parameter
 * @str: input
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
