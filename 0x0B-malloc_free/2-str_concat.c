#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: String 1.
 * @s2: String 2.
 * Return: s.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, k, len;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		if (s2 == NULL)
			s2 = "";
	}
	else
	{
		while (s1[i])
			i++;

		while (s2[j])
			j++;
	}

	len = i + j + 1;
	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < len; k++)
	{
		if (k < i)
			s[k] = s1[k];
		else
			s[k] = s2[k - i];
	}

	return (s);
}
