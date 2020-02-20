/**
 * rot13 - encode a string using rot13
 * @c: input (string)
 * Return: char
 */

char *rot13(char *c)
{
	char atoz[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ntom[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; atoz[j] != '\0'; j++)
		{
			if (c[i] == atoz[j])
			{
				c[i] = ntom[j];
				break;
			}
		}
	}

		return (c);
}
