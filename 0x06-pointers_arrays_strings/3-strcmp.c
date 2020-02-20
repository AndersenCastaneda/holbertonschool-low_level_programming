/**
 * _strcmp - compare two strings
 * @s1: input to compare
 * @s2: input to compare
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	if (i > j)
		return (15);
	else if (i == j)
		return (0);
	else
		return (-15);
}
