#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int l1 = 0, l2 = 0, i = 0, j = 0;

	while (s1 && s1[l1] != '\0')
		l1++;

	while (s2 && s2[l2] != '\0')
		l2++;

	if (n >= l2)
		ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	else
		ptr = malloc(sizeof(char) * (l1 + n + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (i < (l1 + n) && n < l2)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}

	while (i < (l1 + l2) && n >= l2)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}

	ptr[i] = '\0';

	return (ptr);
}
