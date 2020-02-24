/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: char (pointer)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
