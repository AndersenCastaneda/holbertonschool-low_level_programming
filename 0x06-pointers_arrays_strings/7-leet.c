/**
 * leet - encode a string into 1337
 * @c: input (string)
 * Return: c
 */

char *leet(char *c)
{
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char rep[] = "43071";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; lower[j] != '\0'; j++)
		{
			if (c[i] == lower[j] || c[i] == upper[j])
				c[i] = rep [j];
		}
	}

	return (c);
}
