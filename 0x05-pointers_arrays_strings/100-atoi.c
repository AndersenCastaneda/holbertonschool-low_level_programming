#include <stdio.h>

/**
 * _atoi - convert string to int
 * @s: input (string)
 * Return: int
 */

int _atoi(char *s)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while ((s[i] < '1' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			j++;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		k = (k * 10) + (s[i] - '0');
		i++;
	}

	if (j % 2 != 0)
		k = -k;

	if (i == 0)
		return (0);

	return (k);
}
