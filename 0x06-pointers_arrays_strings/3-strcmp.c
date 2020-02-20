/**
 * _strcmp - compare two strings
 * @s1: input to compare
 * @s2: input to compare
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
