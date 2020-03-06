#include <stdlib.h>
#include "holberton.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: input
 * @av: input
 *
 * Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != NULL; j++)
		{
			len++;
		}
		len++;
	}

	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != NULL; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}

	return (ptr);
}
