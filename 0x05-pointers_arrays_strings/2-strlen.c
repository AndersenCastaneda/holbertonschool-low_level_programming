/**
 * _strlen - return the lenght of a string
 * @s: string
 * Return: int (lenght of the string)
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
