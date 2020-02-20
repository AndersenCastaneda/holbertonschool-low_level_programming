/**
 * cap_string - capitalize all words of a string
 * @c: input
 * Return: char
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (i == 0 ||
			    (i > 0 && c[i - 1] == ' ') ||
			    (i > 0 && c[i - 1] == '.') ||
			    (i > 0 && c[i - 1] == '\n') ||
			    (i > 0 && c[i - 1] == '\t') ||
			    (i > 0 && c[i - 1] == ',') ||
			    (i > 0 && c[i - 1] == ';') ||
			    (i > 0 && c[i - 1] == '!') ||
			    (i > 0 && c[i - 1] == '?') ||
			    (i > 0 && c[i - 1] == '"') ||
			    (i > 0 && c[i - 1] == '(') ||
			    (i > 0 && c[i - 1] == ')') ||
			    (i > 0 && c[i - 1] == '{') ||
			    (i > 0 && c[i - 1] == '}'))
				c[i] = c[i] - 32;
		}
	}
	return (c);
}
