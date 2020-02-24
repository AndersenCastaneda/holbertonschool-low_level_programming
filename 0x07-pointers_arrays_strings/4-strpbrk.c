/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: char (pointer)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	while (1)
	{
		i = *s++;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (i == accept[j])
				return (s - 1);
			if (i == 0)
				return ('\0');
		}
	}
}
