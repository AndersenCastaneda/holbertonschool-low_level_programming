#include <stdio.h>

/**
 * _atoi - convert string to int
 * @s: input (string)
 * Return: int
 */
int _atoi(char *s)
{
	int i, j = 0, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;

		if (s[i] == '-')
			j++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (s[i] == '\0')
			break;

		n = (n * 10) + (s[i] - '0');
		i++;
	}

	if (j % 2 != 0)
		n = -n;

	return (n);
}
