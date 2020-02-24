/**
 * _strspn - get the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != ','; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
