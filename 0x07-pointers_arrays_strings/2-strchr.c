/**
 * _strchr - locate a character in a string
 * @s: input
 * @c: input
 * Return: char (pointer) or NULL
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	if (c == '\0')
                return ('\0');

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}

	return (p);
}
