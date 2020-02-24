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

	for (i = 0; s[i] != '\0' || s[i] == c; i++)
	{
		if (s[i] == c && s[i] != null)
		{
			p = &s[i];
			return (p);
		}
	}
	return ('\0');
}
