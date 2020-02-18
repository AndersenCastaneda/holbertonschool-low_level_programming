#include "holberton.h"

/**
 * rev_string - print the reverse of a string
 * @s: input (string)
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i - 1)
	{
		tmp = s[i - 1];
		s[i - 1] = s[j];
		s[j] = tmp;

		j++;
		i--;
	}
}
