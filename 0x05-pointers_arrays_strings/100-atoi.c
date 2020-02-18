#include <stdio.h>

/**
 * _atoi - convert string to int
 * @s: input (string)
 * Return: int
 */

int _atoi(char *s)
{
	int i, j;
	unsigned int k;
	signed int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while ((s[i] < '1' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			j++;
		i++;
	}

	if (j % 2 != 0)
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			k = (k * 10) + (s[i] - '0');
			i++;
		}
		return (k * (-1));
	}
	else
	{
		while (s[i] >= '0' && s[i] <= '9')
		{
			l = (l * 10) + (s[i] - '0');
			i++;
		}
		return (l);
	}

	if (i == 0)
		return (0);
}
