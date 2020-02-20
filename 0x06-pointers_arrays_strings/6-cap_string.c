/**
 * cap_string - capitalize all words of a string
 * @c: input
 * Return: char
 */

char *cap_string(char *c)
{
	int i;
	char ch[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (i == 0 || (i > 0 && c[i] == ch[j]))
			{
				c[i] = c[i] - 32;
			}
		}
	}
	return (c);
}
